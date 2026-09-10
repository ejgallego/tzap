import TzapLean.Pass

/-!
# Executable randomized passes

`RandPass` is the mathematical model: it carries an ideal seed distribution and a proved
failure bound. `ExecutableRandPass` is the runtime boundary: it obtains entropy in `IO` and
returns a checked circuit. Keeping these separate makes the remaining assumption precise —
the proofs reason about independent uniform seeds, while the executable trusts the platform
entropy source to realize those seeds.

Composition is conditional in `IO`: a later pass is invoked, and therefore draws entropy,
only when it actually runs. In particular, each phase-folding round obtains a fresh seed after
seeing the previous round's output, matching the conditional seed structure of `RandPass`.
-/

namespace TzapLean

/-- A runtime pass that may obtain randomness or perform other effects before returning a
checked circuit. Its probabilistic guarantee lives in the corresponding `RandPass`. -/
structure ExecutableRandPass where
  /-- The pass name shown by the driver. -/
  name : String
  /-- Execute the pass on a checked circuit. -/
  run : ∀ {n m}, Circuit n m → IO (Circuit n m)

namespace ExecutableRandPass

/-- Lift an unconditionally correct deterministic pass into the executable interface. -/
def ofPass (p : Pass) : ExecutableRandPass where
  name := p.name
  run := fun c => pure (p.run c)

/-- The executable identity pass. -/
def id : ExecutableRandPass := ofPass {
  name := "id"
  run := fun c => c
  correct := fun c => Equivalent.refl _ _ c.raw.gates
}

/-- Run `p`, then run `q` only when `cond` accepts `p`'s output. Randomness used by `q` is
drawn only in that branch. -/
def compWhen (p q : ExecutableRandPass)
    (cond : ∀ {n m}, Circuit n m → Circuit n m → Bool) : ExecutableRandPass where
  name := q.name ++ " ∘? " ++ p.name
  run := fun c => do
    let out ← p.run c
    if cond c out then q.run out else pure out

/-- Run `p`, then `q`, consuming the input without retaining it for a condition. -/
def comp (p q : ExecutableRandPass) : ExecutableRandPass where
  name := q.name ++ " ∘? " ++ p.name
  run := fun c => do
    let out ← p.run c
    q.run out

/-- Direct composition preserves the conditional specification, including IO effects. -/
theorem comp_eq_compWhen (p q : ExecutableRandPass) :
    p.comp q = p.compWhen q (fun _ _ => true) := rfl

/-- Run a list of executable passes from left to right. -/
def pipeline : List ExecutableRandPass → ExecutableRandPass
  | [] => id
  | p :: ps => p.comp (pipeline ps)

/-- Repeat a pass while it shrinks the gate list, up to `fuel` times. -/
def fixpointShrink (p : ExecutableRandPass) : Nat → ExecutableRandPass
  | 0 => id
  | fuel + 1 => p.compWhen (p.fixpointShrink fuel)
      (fun before after => decide (after.raw.gates.length < before.raw.gates.length))

end ExecutableRandPass

end TzapLean
