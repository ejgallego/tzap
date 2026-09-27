//! `to_pbc` with a weight bound: every non-Clifford rotation and measurement
//! has weight at most the bound, Clifford rotations at most `max(bound, 2)`,
//! and the output is exactly equivalent to the input (unitaries, or
//! quantum-classical channels with measurements), before and after the
//! rotation optimizer.
use std::num::NonZeroUsize;

use super::fuzz::{fuzz_range, random_circuit, random_measured_circuit};
use super::*;
use crate::pbc::{MaxAxisWeights, OptimizeOptions};
use crate::semantics::channel::{ChannelLimits, circuit_channel, pbc_channel};

fn bound(k: usize) -> Option<NonZeroUsize> {
    NonZeroUsize::new(k)
}

fn weights(pbc: &PbcCircuit) -> MaxAxisWeights {
    pbc.max_axis_weights(usize::MAX).unwrap()
}

fn assert_within(pbc: &PbcCircuit, k: usize, context: &str) {
    let max = weights(pbc);
    assert!(
        max.non_clifford <= k && max.clifford <= k.max(2),
        "bound {k} exceeded ({max:?}): {context}"
    );
}

/// H; CX chain; T on the last qubit: without a bound, the T axis is
/// Z0 Z1 ... Z(n-1), of weight n.
fn ghz_t(n: usize) -> Circuit {
    let mut gates = vec![Gate::h(0)];
    for q in 1..n as u32 {
        gates.push(Gate::cnot {
            control: q - 1,
            target: q,
        });
    }
    gates.push(Gate::t(n as u32 - 1));
    input(n, gates)
}

#[test]
fn bound_is_met_and_unneeded_bounds_change_nothing() {
    let c = ghz_t(4);
    let free = to_pbc(&c, None).unwrap();
    assert_eq!(weights(&free).non_clifford, 4);
    for k in 1..=6 {
        let capped = to_pbc(&c, bound(k)).unwrap();
        assert_within(&capped, k, &format!("{c}"));
        assert_equivalent(&c, &capped);
        if k >= 4 {
            // Nothing to flush: identical to the unbounded conversion.
            assert_eq!(capped.to_text().unwrap(), free.to_text().unwrap());
        } else {
            // One flush: the T rotation falls back to Z3, after the H and
            // CX gates as rotations, and the frame is the identity.
            assert_eq!(weights(&capped).non_clifford, 1);
            assert_eq!(capped.operations().len(), 3 + 3 * 3 + 1);
            assert!(capped.frame_matches_gates(&[]));
        }
    }
}

/// A flush only happens when needed: gates after it keep folding into the
/// restarted frame, and a later wide axis flushes again.
#[test]
fn flushes_restart_the_frame_and_repeat() {
    let mut c = ghz_t(3);
    let tail = ghz_t(3).gates;
    c.gates.extend(tail);
    let capped = to_pbc(&c, bound(2)).unwrap();
    assert_within(&capped, 2, "ghz_t(3) twice");
    assert_equivalent(&c, &capped);
    let t_axes = capped
        .rotation_weights(usize::MAX)
        .unwrap()
        .into_iter()
        .zip(capped.operations())
        .filter(|(_, op)| matches!(op, PbcOp::Rotate { angle, .. } if angle.eighths() % 2 == 1))
        .map(|(w, _)| w)
        .collect::<Vec<_>>();
    assert_eq!(t_axes, vec![1, 1]);
}

/// Toffoli axes have weight up to 3: bounds 1 and 2 decompose them first;
/// bound 3 keeps them native, as seven rotations.
#[test]
fn toffolis_decompose_only_below_weight_three() {
    let c = input(
        3,
        vec![Gate::ccx {
            control1: 0,
            control2: 1,
            target: 2,
        }],
    );
    for k in 1..=3 {
        let capped = to_pbc(&c, bound(k)).unwrap();
        assert_within(&capped, k, "ccx");
        assert_equivalent(&c, &capped);
        if k == 3 {
            assert_eq!(capped.operations().len(), 7);
        }
    }
    // Errors still refer to the input's instruction indices.
    let bad = input(
        3,
        vec![
            Gate::ccz {
                control1: 0,
                control2: 1,
                target: 2,
            },
            Gate::reset(0),
        ],
    );
    assert!(matches!(
        to_pbc(&bad, bound(1)),
        Err(PbcError::InvalidInput { index: 1, .. })
    ));
}

/// Convert `seed`'s circuit under bound `k`, check weights and exact
/// equivalence, then optimize without frame moves and check again. Returns
/// the number of Clifford rotations emitted by flushes.
fn case(seed: u64, k: usize) -> usize {
    let measured = seed % 2 == 1;
    let (c, store) = if measured {
        random_measured_circuit(seed)
    } else {
        (random_circuit(seed).0, vec![])
    };
    let replay = format!(
        "seed={seed:#x}, bound={k}\n\
         Replay: PBC_FUZZ_SEED={seed} PBC_FUZZ_CASES=1 cargo test --release \
         fuzz_max_weight -- --ignored --nocapture\n{c}"
    );
    let limits = ChannelLimits::default();
    let expected = measured.then(|| circuit_channel(&c, &store, limits).unwrap());
    let check = |pbc: &PbcCircuit, stage: &str| {
        assert_within(pbc, k, &format!("{stage}, {replay}"));
        match &expected {
            Some(expected) => assert_eq!(
                expected.compare(&pbc_channel(pbc, &store, limits).unwrap()),
                Ok(()),
                "{stage} channel mismatch: {replay}"
            ),
            None => assert_equivalent(&c, pbc),
        }
    };
    let mut pbc = to_pbc(&c, bound(k)).unwrap();
    check(&pbc, "conversion");
    let flushed = pbc
        .operations()
        .iter()
        .filter(|op| matches!(op, PbcOp::Rotate { angle, .. } if angle.eighths() % 2 == 0))
        .count();
    let options = OptimizeOptions {
        clifford_to_frame: false,
        ..OptimizeOptions::default()
    };
    let stats = pbc.optimize_rotations(options).unwrap();
    assert!(stats.t_after <= stats.t_before, "{replay}");
    check(&pbc, "optimization");
    flushed
}

/// Widths 1-3 (exact four-qubit channels are slow in debug builds), each at
/// bounds 1-4, half with mid-circuit measurements.
#[test]
fn bounded_fuzz_max_weight_covers_24_circuits_at_4_bounds() {
    let mut flushed = [0; 4];
    for seed in (0x4d57_0000..).filter(|seed| seed % 4 != 3).take(24) {
        for k in 1..=4 {
            flushed[k - 1] += case(seed, k);
        }
    }
    // Small bounds force flushes; bound 4 exceeds every width here.
    assert!(flushed[0] > 0 && flushed[1] > 0, "{flushed:?}");
    assert_eq!(flushed[3], 0);
}

/// PBC_FUZZ_CASES=300 cargo test --release fuzz_max_weight -- --ignored --nocapture
#[test]
#[ignore = "extended weight-bound fuzzing; set PBC_FUZZ_CASES and PBC_FUZZ_SEED"]
fn fuzz_max_weight() {
    let (count, seed) = fuzz_range(300, 0x4d57_1000);
    let mut flushed = [0; 5];
    for case_index in 0..count {
        for k in 1..=5 {
            flushed[k - 1] += case(seed.wrapping_add(case_index), k);
        }
    }
    eprintln!(
        "max-weight fuzz: {count} cases x bounds 1-5 passed, flushed Clifford rotations \
         per bound {flushed:?}, starting seed {seed:#x}"
    );
}
