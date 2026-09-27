//! A Clifford accumulated from Pauli rotations by pi/4 and pi/2, as the
//! images of every qubit's X, Y, and Z, for moving Clifford rotations into
//! the output frame.

use super::super::PbcError;
use super::words::{Axes, anticommutes, product};

/// The Clifford F, as `F† P_q F` for P in X, Y, Z: packed canonical words
/// with phase exponents (`i^p W`). Starts as the identity, and stores images
/// only for the qubits it has touched, each in a slot allocated on first
/// touch and counted against the axes' storage limit.
pub(super) struct Clifford {
    l: usize,
    /// Slot of each qubit's images, or `NONE` while they are the identity's.
    slots: Vec<u32>,
    /// The qubit of each slot.
    qubits: Vec<u32>,
    /// Images of slot s: X at index 3s, Y at 3s + 1, Z at 3s + 2; `2 l`
    /// words each.
    images: Vec<u64>,
    phases: Vec<u8>,
    /// Support signature of each image (as in `Axes::support`), to skip
    /// images that cannot anticommute with an absorbed axis.
    supports: Vec<u64>,
    /// Qubits whose images may differ from the identity's.
    touched: Vec<u64>,
    signature: fn(&[u64], usize) -> u64,
    scratch: Vec<u64>,
}

const LETTERS: usize = 3;
const NONE: u32 = u32::MAX;

impl Clifford {
    pub fn identity(num_qubits: usize, l: usize, signature: fn(&[u64], usize) -> u64) -> Self {
        Self {
            l,
            slots: vec![NONE; num_qubits],
            qubits: Vec::new(),
            images: Vec::new(),
            phases: Vec::new(),
            supports: Vec::new(),
            touched: vec![0; l],
            signature,
            scratch: vec![0; 2 * l],
        }
    }

    /// Storage counted against the axes' limit, in u64 words.
    pub fn words(&self) -> usize {
        self.images.len()
    }

    /// Give qubit q a slot holding its identity images.
    fn touch(&mut self, q: usize, axes: &Axes) -> Result<(), PbcError> {
        if self.slots[q] != NONE {
            return Ok(());
        }
        let (l, stride) = (self.l, 2 * self.l);
        axes.reserve(LETTERS * stride)?;
        self.slots[q] = self.qubits.len() as u32;
        self.qubits.push(q as u32);
        let (word, bit) = (q / 64, 1u64 << (q % 64));
        for (x, z) in [(true, false), (true, true), (false, true)] {
            let start = self.images.len();
            self.images.resize(start + stride, 0);
            if x {
                self.images[start + word] = bit;
            }
            if z {
                self.images[start + l + word] = bit;
            }
            self.supports
                .push((self.signature)(&self.images[start..start + stride], l));
            self.phases.push(0);
        }
        Ok(())
    }

    /// Compose a Pauli rotation `exp(-i k pi/8 B)`, k in {2, -2, 4}, executed
    /// before F: `F <- F R`. Each image I becomes `R† I R`, which for an image
    /// anticommuting with B is `i B I` (k = 2), `-i B I` (k = -2), or `-I`
    /// (k = 4); commuting images are unchanged. Y images follow the same rule,
    /// since conjugation is linear. Untouched qubits outside B's support keep
    /// identity images, which commute with B; those in it get a slot first,
    /// which fails if the storage limit would be exceeded.
    pub fn absorb(
        &mut self,
        b: &[u64],
        b_support: u64,
        k: i8,
        axes: &Axes,
    ) -> Result<(), PbcError> {
        debug_assert!(matches!(k, 2 | -2 | 4));
        let (l, stride) = (self.l, 2 * self.l);
        for j in 0..l {
            let mut acted = b[j] | b[l + j];
            while acted != 0 {
                let q = 64 * j + acted.trailing_zeros() as usize;
                acted &= acted - 1;
                self.touch(q, axes)?;
            }
        }
        for index in 0..self.phases.len() {
            if self.supports[index] & b_support == 0 {
                continue;
            }
            let start = index * stride;
            let image = &mut self.images[start..start + stride];
            if !anticommutes(image, b, l) {
                continue;
            }
            if k == 4 {
                self.phases[index] = (self.phases[index] + 2) % 4;
            } else {
                let e = product(b, image, &mut self.scratch, l);
                let turn = if k == 2 { 1 } else { 3 };
                self.phases[index] = (self.phases[index] + e + turn) % 4;
                image.copy_from_slice(&self.scratch);
                self.supports[index] = (self.signature)(image, l);
            }
            let q = self.qubits[index / LETTERS] as usize;
            self.touched[q / 64] |= 1 << (q % 64);
        }
        Ok(())
    }

    /// Whether `F† W F = W` is certain because W acts on no touched qubit.
    pub fn fixes(&self, w: &[u64]) -> bool {
        let (x, z) = w.split_at(self.l);
        (0..self.l).all(|j| (x[j] | z[j]) & self.touched[j] == 0)
    }

    /// `F† W F` for a canonical word W, written to `out`; returns its phase
    /// exponent. W is the product of its single-qubit factors, whose images
    /// commute with each other, and untouched qubits map to themselves.
    pub fn conjugate(&mut self, w: &[u64], out: &mut [u64]) -> u8 {
        let (l, stride) = (self.l, 2 * self.l);
        let (x, z) = w.split_at(l);
        out.copy_from_slice(w);
        for j in 0..l {
            out[j] &= !self.touched[j];
            out[l + j] &= !self.touched[j];
        }
        let mut phase = 0u32;
        for j in 0..l {
            let mut moved = (x[j] | z[j]) & self.touched[j];
            while moved != 0 {
                let bit = moved.trailing_zeros() as usize;
                moved &= moved - 1;
                let letter = match (x[j] >> bit & 1, z[j] >> bit & 1) {
                    (1, 0) => 0,
                    (1, 1) => 1,
                    _ => 2,
                };
                let index = LETTERS * self.slots[64 * j + bit] as usize + letter;
                let image = &self.images[index * stride..(index + 1) * stride];
                let e = product(out, image, &mut self.scratch, l);
                out.copy_from_slice(&self.scratch);
                phase += u32::from(self.phases[index]) + u32::from(e);
            }
        }
        (phase % 4) as u8
    }
}
