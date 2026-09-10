# tzap-lean

`tzap-lean` is a formally verified Lean 4 port of [tzap](https://github.com/qqq-wisc/tzap), the Rust quantum-circuit optimizer. It formalizes the circuit representation and channel semantics, then implements deterministic passes with unconditional correctness proofs and randomized phase folding with a proved failure-probability bound.

## Installation

Install [Lean through `elan`](https://lean-lang.org/install/), then clone and build the project:

```sh
git clone https://github.com/qqq-wisc/tzap.git
cd tzap/lean
lake exe cache get
lake build
```

## Running

Optimize an OpenQASM 2.0 circuit and write the result to a file:

```sh
lake exe tzap-lean input.qasm optimized.qasm
```

For repeatable native runtime measurements, see the
[representative benchmark surface](benchmarks/README.md).

## The obligation

Deterministic passes return a checked circuit that is provably equivalent to their input:

```lean
structure Pass where
  name : String
  run : ∀ {n m}, Circuit n m → Circuit n m
  correct : ∀ {n m} (c : Circuit n m),
    (run c).Equivalent c
```

Randomized phase folding is a `RandPass`. For each checked circuit it defines an ideal seed distribution, a transformation, and an error bound, and proves that the probability of returning a non-equivalent circuit is no greater than that bound. The executable uses fresh 128-bit tags from the operating system, matching Rust's tag width.

## What is trusted

| Component | Role in the trust boundary | Consequence if wrong |
|---|---|---|
| Formal circuit semantics and specification | Define what “correct” means: equality of the modeled quantum channels. | The development could prove preservation of an unintended model. |
| OpenQASM output boundary | `serializeChecked` reparses emitted text and refuses to write it unless it reconstructs the optimized circuit. | A failed check stops output rather than emitting a changed circuit. |
| Operating-system randomness | Supplies the independent uniform 128-bit tags assumed by the `PhaseFoldRand` probability theorem. | Biased, correlated, or adversarial entropy can invalidate the numerical failure bound. |
| Lean compiler and runtime | Execute the proved definitions and IO shell. | Outside the logic’s proof guarantee, as for any compiled verification artifact. |
