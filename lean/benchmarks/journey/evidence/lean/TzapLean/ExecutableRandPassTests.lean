import TzapLean.ExecutableRandPass

namespace TzapLean

private def dropOneGate (c : Circuit n m) : Circuit n m :=
  ⟨c.raw.withGates c.raw.gates.tail, c.numQubits_eq, c.numCbits_eq,
    fun g hg => c.wf g (List.mem_of_mem_tail hg)⟩

-- Fuel exhaustion and the first non-shrinking iteration have different effect counts.
-- An empty circuit still invokes the pass once when fuel remains.
#eval show IO Unit from do
  let c := Circuit.of (RawCircuit.ofGates 1 0 [.h 0, .x 0, .t 0]) (by decide)
  for (fuel, length, count) in [(0, 3, 0), (1, 2, 1), (3, 0, 3), (10, 0, 4)] do
    let calls ← IO.mkRef 0
    let p : ExecutableRandPass := {
      name := "drop one"
      run := fun c => do
        calls.modify (· + 1)
        return dropOneGate c
    }
    let out ← p.runFixpointShrink fuel c
    unless out.raw.gates.length == length && (← calls.get) == count do
      throw (IO.userError s!"fixpoint fuel/effect count failed for fuel {fuel}")

-- Stop on equal length even when the output changed, and return that changed output.
#eval show IO Unit from do
  let c := Circuit.of (RawCircuit.ofGates 1 0 [.h 0, .x 0, .t 0]) (by decide)
  let calls ← IO.mkRef 0
  let p : ExecutableRandPass := {
    name := "reverse"
    run := fun c => do
      calls.modify (· + 1)
      return ⟨c.raw.withGates c.raw.gates.reverse, c.numQubits_eq, c.numCbits_eq,
        fun g hg => c.wf g (List.mem_reverse.mp hg)⟩
  }
  let out ← p.runFixpointShrink 10 c
  unless out.raw.gates == [.t 0, .x 0, .h 0] && (← calls.get) == 1 do
    throw (IO.userError "fixpoint ran again after a length-preserving change")

-- An error after a successful shrinking round propagates without further effects.
#eval show IO Unit from do
  let c := Circuit.of (RawCircuit.ofGates 1 0 [.h 0, .x 0, .t 0]) (by decide)
  let calls ← IO.mkRef 0
  let p : ExecutableRandPass := {
    name := "fail second round"
    run := fun c => do
      calls.modify (· + 1)
      if (← calls.get) == 2 then throw (IO.userError "expected failure")
      return dropOneGate c
  }
  let failed ← try
      let _ ← p.runFixpointShrink 10 c
      pure false
    catch e => pure (match e with
      | .userError message => message == "expected failure"
      | _ => false)
  unless failed && (← calls.get) == 2 do
    throw (IO.userError "fixpoint failed to preserve error/effect behavior")

end TzapLean
