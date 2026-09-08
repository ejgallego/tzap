import Mathlib.Probability.ProbabilityMassFunction.Constructions
import TzapLean.Pass

/-!
# Randomized Passes

`Pass` demands unconditional correctness, which a randomized optimizer cannot sign: fixing a
seed fixes the transformation, and no fixed seed can be right on *every* circuit. A pass
whose parities are `k`-bit random tags is already defeated by a circuit on `k+1` wires,
which has more distinct parities than there are tags.

So the primitive here is `RandPass`: a transformation together with a distribution on its
seed and a *bound on the probability that its output is wrong*.

```
correct : ∀ c, Pr_{s ← dist c} [ ⟦run c s⟧ ≠ ⟦c⟧ ] ≤ error c
```

A deterministic transformation is the `error = 0` case, with a one-point seed. The concrete
deterministic passes enter this idealized randomized theory through adapters in `Pipeline`;
their existing correctness proofs are reused verbatim.

Composition is where the design pays off. `RandPass.comp` draws the second pass's seed
*after* seeing the first pass's output — `PMF.bind`, so the seed space of the composite is a
sigma type and no independence argument is needed. The error adds:

```
error (comp p q) c = p.error c + ⨆ s, q.error (p.run c s)
```

and a pipeline of deterministic passes collapses to `0`, recovering `Pass.correct_runAll`.
Note that the bound needs no independence *between* the two failure events — it is a union
bound, which holds regardless.
-/

namespace TzapLean

open scoped ENNReal

noncomputable section

/-- An optimization pass that may consult randomness, carrying a bound on how often its
output can fail to denote the same channel as its input. -/
structure RandPass where
  /-- The pass's name. -/
  name : String
  /-- The randomness the pass consumes, as a function of the circuit it is given. -/
  Seed : {n m : Nat} → Circuit n m → Type
  /-- The distribution the seed is drawn from (`PMF.uniformOfFintype` in practice). -/
  dist : {n m : Nat} → (c : Circuit n m) → PMF (Seed c)
  /-- The transformation, for a given seed. -/
  run : {n m : Nat} → (c : Circuit n m) → Seed c → Circuit n m
  /-- The failure probability this pass is allowed. -/
  error : {n m : Nat} → Circuit n m → ℝ≥0∞
  /-- Passes keep every operand in range, whatever the seed. -/
  wellFormed_run : ∀ {n m} (c : Circuit n m) s,
    c.raw.WellFormed → (run c s).raw.WellFormed
  /-- Passes leave the cached `has*` flags describing the gates that came out. -/
  flagsOk_run : ∀ {n m} (c : Circuit n m) s,
    c.raw.FlagsOk → (run c s).raw.FlagsOk
  /-- **The correctness obligation**: the output denotes the same channel as the input,
  except on a set of seeds of probability at most `error c`. -/
  correct : ∀ {n m} (c : Circuit n m),
    (dist c).toOuterMeasure {s | ¬ (run c s).Equivalent c} ≤ error c

namespace RandPass

/-- The failure event of a pass on a circuit. -/
def failure (p : RandPass) (c : Circuit n m) : Set (p.Seed c) :=
  {s | ¬ (p.run c s).Equivalent c}

/-! ## Deterministic passes are the `error = 0` case -/

/-- The identity pass. -/
def id : RandPass where
  name := "id"
  Seed := fun _ => Unit
  dist := fun _ => PMF.pure ()
  run := fun c _ => c
  error := fun _ => 0
  wellFormed_run _ _ hc := hc
  flagsOk_run _ _ hc := hc
  correct c := by
    have hempty : {s : Unit | ¬ c.Equivalent c} = ∅ := by
      ext s
      simp only [Set.mem_ofPred_eq, Set.mem_empty_iff_false, iff_false, not_not]
      exact Equivalent.refl _ _ _
    rw [hempty]
    simp

/-- **Zero error collapses to deterministic correctness.** A `RandPass` with `error c = 0` is
right on *every* seed its distribution can produce — the `Pass` notion, recovered from the
randomized one rather than sitting beside it. -/
theorem correct_of_error_eq_zero (p : RandPass) (c : Circuit n m)
    (h : p.error c = 0) {s : p.Seed c} (hs : s ∈ (p.dist c).support) :
    (p.run c s).Equivalent c := by
  have hzero : (p.dist c).toOuterMeasure (p.failure c) = 0 :=
    le_antisymm (le_of_le_of_eq (p.correct c) h) (by simp)
  have hdisj := (PMF.toOuterMeasure_apply_eq_zero_iff _ _).mp hzero
  by_contra hne
  exact (Set.disjoint_left.mp hdisj hs) hne

/-! ## Composition -/

/-- Run `p`, then run `q` on its output *if* `cond` says to, drawing `q`'s seed after seeing
that output.

The condition sees both circuits, which is what the optimizer's round loop needs: it repeats
the pipeline exactly while the gate count keeps falling. `comp` is the unconditional case,
and the two share this proof rather than having one each.

The second component is optional: `none` when the condition is false, `some s₂` when `q`
runs. Thus the ideal distribution, like the executable composition, draws no unused seed. -/
def nextDist (p q : RandPass) (cond : ∀ {n m}, Circuit n m → Circuit n m → Bool)
    (c : Circuit n m) (s : p.Seed c) : PMF (Option (q.Seed (p.run c s))) :=
  if cond c (p.run c s) then (q.dist (p.run c s)).map some else PMF.pure none

def compWhen (p q : RandPass) (cond : ∀ {n m}, Circuit n m → Circuit n m → Bool) : RandPass where
  name := q.name ++ " ∘? " ++ p.name
  Seed := fun c => Σ s : p.Seed c, Option (q.Seed (p.run c s))
  dist := fun c => (p.dist c).bind fun s =>
    (nextDist p q cond c s).map
      (fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c, Option (q.Seed (p.run c s))))
  run := fun c s => match s.2 with
    | some s₂ => q.run (p.run c s.1) s₂
    | none => p.run c s.1
  error := fun c => p.error c + ⨆ s : p.Seed c,
    if cond c (p.run c s) then q.error (p.run c s) else 0
  wellFormed_run c s hc := by
    cases s.2 with
    | some s₂ => exact q.wellFormed_run _ _ (p.wellFormed_run c s.1 hc)
    | none => exact p.wellFormed_run c s.1 hc
  flagsOk_run c s hc := by
    cases s.2 with
    | some s₂ => exact q.flagsOk_run _ _ (p.flagsOk_run c s.1 hc)
    | none => exact p.flagsOk_run c s.1 hc
  correct c := by
    set E : ℝ≥0∞ := ⨆ s : p.Seed c,
      if cond c (p.run c s) then q.error (p.run c s) else 0 with hE
    set F : Set (Σ s : p.Seed c, Option (q.Seed (p.run c s))) :=
      {s | ¬ (match s.2 with
        | some s₂ => q.run (p.run c s.1) s₂
        | none => p.run c s.1).Equivalent c} with hF
    -- the inner measure, for a fixed first-stage seed
    have hinner : ∀ s : p.Seed c,
        (nextDist p q cond c s).toOuterMeasure
            ((fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c, Option (q.Seed (p.run c s)))) ⁻¹' F) ≤
          Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s + E := by
      intro s
      by_cases hgood : (p.run c s).Equivalent c
      · -- `p` succeeded here, so any final failure is a failure of `q`
        by_cases hcond : cond c (p.run c s) = true
        · have hsub : (fun s₂ =>
              (⟨s, some s₂⟩ : Σ s : p.Seed c, Option (q.Seed (p.run c s)))) ⁻¹' F ⊆
              q.failure (p.run c s) := by
            intro s₂ hs₂
            simp only [hF, Set.mem_preimage, Set.mem_ofPred_eq] at hs₂
            intro hq
            exact hs₂ (Equivalent.trans hq hgood)
          calc (nextDist p q cond c s).toOuterMeasure
                ((fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
                  Option (q.Seed (p.run c s)))) ⁻¹' F)
              = (q.dist (p.run c s)).toOuterMeasure
                  ((fun s₂ => (⟨s, some s₂⟩ : Σ s : p.Seed c,
                    Option (q.Seed (p.run c s)))) ⁻¹' F) := by
                    rw [nextDist, if_pos hcond, PMF.toOuterMeasure_map_apply]
                    congr 1
            _ ≤ (q.dist (p.run c s)).toOuterMeasure (q.failure (p.run c s)) :=
                (q.dist (p.run c s)).toOuterMeasure_mono (by
                  intro x hx; exact hsub hx.1)
            _ ≤ q.error (p.run c s) := q.correct _
            _ ≤ E := by
              rw [hE]
              simpa [hcond] using le_iSup
                (fun s : p.Seed c => if cond c (p.run c s) then q.error (p.run c s) else 0) s
            _ ≤ Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s + E := le_add_self
        · have hnone : (none : Option (q.Seed (p.run c s))) ∉
              ((fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
                Option (q.Seed (p.run c s)))) ⁻¹' F) := by
            simp only [hF, Set.mem_preimage, Set.mem_ofPred_eq, not_not]
            exact hgood
          have hzero : (PMF.pure (none : Option (q.Seed (p.run c s)))).toOuterMeasure
                ((fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
                  Option (q.Seed (p.run c s)))) ⁻¹' F) = 0 := by
            rw [PMF.toOuterMeasure_apply_eq_zero_iff]
            simp [hnone]
          rw [nextDist, if_neg hcond, hzero]
          exact bot_le
      · -- `p` already failed here; bound the inner probability by one
        have hone : Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s = 1 := by
          rw [Set.indicator_of_mem]
          exact hgood
        rw [hone]
        refine le_add_right ?_
        calc (nextDist p q cond c s).toOuterMeasure _
            ≤ (nextDist p q cond c s).toOuterMeasure Set.univ :=
              (nextDist p q cond c s).toOuterMeasure_mono
                (by intro x _; exact Set.mem_univ x)
          _ = 1 := by rw [PMF.toOuterMeasure_apply]; simp
    calc ((p.dist c).bind fun s =>
            (nextDist p q cond c s).map
              (fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
                Option (q.Seed (p.run c s))))).toOuterMeasure F
        = ∑' s, (p.dist c) s *
            ((nextDist p q cond c s).map
              (fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
                Option (q.Seed (p.run c s))))).toOuterMeasure F := by
          rw [PMF.toOuterMeasure_bind_apply]
      _ = ∑' s, (p.dist c) s * (nextDist p q cond c s).toOuterMeasure
            ((fun s₂ => (⟨s, s₂⟩ : Σ s : p.Seed c,
              Option (q.Seed (p.run c s)))) ⁻¹' F) := by
          refine tsum_congr fun s => ?_
          rw [PMF.toOuterMeasure_map_apply]
      _ ≤ ∑' s, (p.dist c) s *
            (Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s + E) := by
          refine ENNReal.tsum_le_tsum fun s => ?_
          exact mul_le_mul_right (hinner s) _
      _ = (∑' s, (p.dist c) s * Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s) +
            (∑' s, (p.dist c) s * E) := by
          rw [← ENNReal.tsum_add]
          exact tsum_congr fun s => by ring
      _ = (p.dist c).toOuterMeasure (p.failure c) + E := by
          have h1 : (∑' s, (p.dist c) s * Set.indicator (p.failure c) (fun _ => (1 : ℝ≥0∞)) s)
              = (p.dist c).toOuterMeasure (p.failure c) := by
            rw [PMF.toOuterMeasure_apply]
            refine tsum_congr fun s => ?_
            by_cases hs : s ∈ p.failure c <;> simp [hs]
          have h2 : (∑' _s : p.Seed c, (p.dist c) _s * E) = E := by
            rw [ENNReal.tsum_mul_right, PMF.tsum_coe, one_mul]
          rw [h1, h2]
      _ ≤ p.error c + E := add_le_add (p.correct c) le_rfl

/-- Run `p`, then `q` on its output, drawing `q`'s seed after seeing that output. -/
def comp (p q : RandPass) : RandPass := p.compWhen q (fun _ _ => true)

@[simp] theorem comp_run_some (p q : RandPass) (c : Circuit n m)
    (s₁ : p.Seed c) (s₂ : q.Seed (p.run c s₁)) :
    (p.comp q).run c ⟨s₁, some s₂⟩ = q.run (p.run c s₁) s₂ := rfl

@[simp] theorem comp_run_none (p q : RandPass) (c : Circuit n m) (s₁ : p.Seed c) :
    (p.comp q).run c ⟨s₁, none⟩ = p.run c s₁ := rfl

@[simp] theorem comp_error (p q : RandPass) (c : Circuit n m) :
    (p.comp q).error c = p.error c + ⨆ s : p.Seed c, q.error (p.run c s) := rfl

@[simp] theorem compWhen_error (p q : RandPass)
    (cond : ∀ {n m}, Circuit n m → Circuit n m → Bool) (c : Circuit n m) :
    (p.compWhen q cond).error c = p.error c + ⨆ s : p.Seed c,
      if cond c (p.run c s) then q.error (p.run c s) else 0 := rfl

/-- A pipeline, run left to right: the head runs first, on the original circuit. -/
def pipeline : List RandPass → RandPass
  | [] => RandPass.id
  | p :: ps => p.comp (pipeline ps)

@[simp] theorem pipeline_nil : pipeline [] = RandPass.id := rfl

@[simp] theorem pipeline_cons (p : RandPass) (ps : List RandPass) :
    pipeline (p :: ps) = p.comp (pipeline ps) := rfl

/-- The gate count fell: the optimizer's rule for going round again. -/
def Shrank (c c' : Circuit n m) : Bool :=
  decide (c'.raw.gates.length < c.raw.gates.length)

/-- **Repeat `p` while it keeps shrinking the circuit**, at most `fuel` times — the driver's
round loop, as a pass rather than as an `IO` loop.

`fuel` bounds the recursion, and `c.gates.length + 1` is always enough: a round that does not
remove a gate ends the loop, so at most `c.gates.length` rounds can continue. -/
def fixpointShrink (p : RandPass) : Nat → RandPass
  | 0 => RandPass.id
  | n + 1 => p.compWhen (p.fixpointShrink n) Shrank

@[simp] theorem fixpointShrink_zero (p : RandPass) : p.fixpointShrink 0 = RandPass.id := rfl

@[simp] theorem fixpointShrink_succ (p : RandPass) (n : Nat) :
    p.fixpointShrink (n + 1) = p.compWhen (p.fixpointShrink n) Shrank := rfl

/-- **The union bound over rounds.** `fuel` rounds are wrong with probability at most `fuel`
times one round's, whatever the rounds do to each other's inputs — the composition draws each
round's seed after seeing the previous round's output, so nothing here assumes independence
of the *events*, only that the draws are fresh. -/
theorem fixpointShrink_error_le (p : RandPass) (B : ℝ≥0∞)
    (hB : ∀ {n m} (c : Circuit n m), p.error c ≤ B) :
    ∀ {n m} (fuel : Nat) (c : Circuit n m), (p.fixpointShrink fuel).error c ≤ fuel * B := by
  intro n m fuel
  induction fuel with
  | zero => intro c; simp [RandPass.id]
  | succ n ih =>
      intro c
      have hsup : (⨆ s : p.Seed c, if Shrank c (p.run c s) then
          (p.fixpointShrink n).error (p.run c s) else 0) ≤ (n : ℝ≥0∞) * B :=
        iSup_le fun s => by
          by_cases h : Shrank c (p.run c s) = true
          · rw [if_pos h]
            exact ih _
          · rw [if_neg h]
            exact bot_le
      calc (p.fixpointShrink (n + 1)).error c
          = p.error c + ⨆ s : p.Seed c, if Shrank c (p.run c s) then
              (p.fixpointShrink n).error (p.run c s) else 0 := rfl
        _ ≤ B + (n : ℝ≥0∞) * B := add_le_add (hB c) hsup
        _ = ((n + 1 : Nat) : ℝ≥0∞) * B := by push_cast; ring

/-- The same union bound along a pipeline. -/
theorem pipeline_error_le (B : ℝ≥0∞) :
    ∀ (ps : List RandPass),
      (∀ p ∈ ps, ∀ {n m} (c : Circuit n m), p.error c ≤ B) →
      ∀ {n m} (c : Circuit n m), (pipeline ps).error c ≤ ps.length * B := by
  intro ps
  induction ps with
  | nil => intro _ n m c; simp [pipeline, RandPass.id]
  | cons p ps ih =>
      intro hB n m c
      have hsup : (⨆ s : p.Seed c, (pipeline ps).error (p.run c s)) ≤ (ps.length : ℝ≥0∞) * B :=
        iSup_le fun s => ih (fun q hq => hB q (by simp [hq])) _
      calc (pipeline (p :: ps)).error c
          = p.error c + ⨆ s : p.Seed c, (pipeline ps).error (p.run c s) := rfl
        _ ≤ B + (ps.length : ℝ≥0∞) * B := add_le_add (hB p (by simp) c) hsup
        _ = ((ps.length : ℝ≥0∞) + 1) * B := by ring
        _ = ((p :: ps).length : ℝ≥0∞) * B := by
              rw [List.length_cons]; push_cast; ring

end RandPass

end
end TzapLean
