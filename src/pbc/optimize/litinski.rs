//! Litinski's greedy layering ("A Game of Surface Codes", Sec. 1), as a
//! baseline, and T-depth measurement.

use super::*;

impl Optimizer<'_> {
    /// Litinski's algorithm, per segment: partition the rotations into layers
    /// of mutually commuting rotations (a new layer whenever the next rotation
    /// anticommutes with the current one); then repeatedly move each rotation
    /// of layer i + 1 into layer i if it commutes with all of layer i, until
    /// nothing moves. Equal rotations that meet in a layer combine; a combined
    /// Clifford is commuted to the end (into the frame), which changes later
    /// axes, so layering restarts until no more rotations combine, for at
    /// most `rounds` passes. With `clifford_to_frame` off, combined Cliffords
    /// stay in place as rotations instead. Returns whether the frame changed.
    pub(super) fn litinski(
        &mut self,
        items: &mut Vec<Item>,
        frame: &mut [(u32, i8)],
    ) -> Result<bool, PbcError> {
        // Combined Cliffords go to the end, as in the paper, unless
        // `clifford_to_frame` is off (then these streams change nothing).
        let mut frame_changed = false;
        if self.options.rounds == 0 {
            return Ok(false);
        }
        // Initial Cliffords, if any, go to the end first.
        frame_changed |= self.stream(items, frame, false)? > 0;
        for _ in 0..self.options.rounds {
            let combined = rewrite_segments(items, |segment| self.layer_segment(segment));
            self.stats.merges += combined;
            if combined == 0 {
                break;
            }
            frame_changed |= self.stream(items, frame, false)? > 0;
        }
        Ok(frame_changed)
    }

    /// Layer one segment and write it back in layer order. Returns the number
    /// of rotations combined.
    fn layer_segment(&mut self, rots: &mut Vec<Rot>) -> usize {
        // Naive partition; equal rotations in one layer combine.
        let mut combined = 0;
        let mut layers: Vec<Vec<Rot>> = Vec::new();
        for &rot in rots.iter() {
            match layers.last_mut() {
                Some(layer) if self.commutes_with_all(layer, rot) => {
                    match layer.iter_mut().find(|r| r.axis == rot.axis) {
                        Some(equal) => {
                            equal.k = normalize(i32::from(equal.k) + i32::from(rot.k));
                            combined += 1;
                        }
                        None => layer.push(rot),
                    }
                }
                _ => layers.push(vec![rot]),
            }
        }
        loop {
            let mut moved = false;
            for i in 0..layers.len().saturating_sub(1) {
                let next = std::mem::take(&mut layers[i + 1]);
                let mut stay = Vec::with_capacity(next.len());
                for rot in next {
                    if !self.commutes_with_all(&layers[i], rot) {
                        stay.push(rot);
                        continue;
                    }
                    moved = true;
                    match layers[i].iter_mut().find(|r| r.axis == rot.axis) {
                        Some(equal) => {
                            equal.k = normalize(i32::from(equal.k) + i32::from(rot.k));
                            combined += 1;
                        }
                        None => layers[i].push(rot),
                    }
                }
                layers[i + 1] = stay;
            }
            for layer in &mut layers {
                layer.retain(|r| r.k != 0);
            }
            layers.retain(|layer| !layer.is_empty());
            if !moved {
                break;
            }
        }
        *rots = layers.concat();
        combined
    }

    fn commutes_with_all(&self, layer: &[Rot], rot: Rot) -> bool {
        layer
            .iter()
            .all(|r| r.support & rot.support == 0 || !self.axes.anticommute(r.axis, rot.axis))
    }

    /// T depth: the most odd-angle rotations along any chain of rotations
    /// that must stay in order (each anticommuting with the next), summed
    /// over segments. Clifford rotations add no depth themselves but stay in
    /// the chain: one between two T rotations it anticommutes with keeps
    /// them apart, since commuting it past either changes that axis. Each
    /// rotation's level is the largest `level + [is T]` among the earlier
    /// rotations it anticommutes with; the depth is the largest T level + 1.
    pub(super) fn t_depth(&self, items: &[Item]) -> usize {
        let mut total = 0;
        // Bucket v holds the rotations with `level + [is T]` = v, and the
        // union of their signatures.
        let mut buckets: Vec<(u64, Vec<Rot>)> = Vec::new();
        // Per signature bit: the highest bucket touching it, plus one.
        let mut top = [0usize; 64];
        let mut depth = 0;
        for item in items {
            match *item {
                Item::Rot(rot) => {
                    // Buckets above the highest one sharing a bit hold no
                    // anticommuting rotation; search down from there.
                    let bound = bits(rot.support).map(|b| top[b]).max().unwrap_or(0);
                    let mut level = 0;
                    for index in (0..bound).rev() {
                        let (signature, bucket) = &buckets[index];
                        if signature & rot.support != 0 && !self.commutes_with_all(bucket, rot) {
                            level = index;
                            break;
                        }
                    }
                    let is_t = rot.k % 2 != 0;
                    let value = level + usize::from(is_t);
                    if is_t {
                        depth = depth.max(value);
                    }
                    if buckets.len() <= value {
                        buckets.resize_with(value + 1, || (0, Vec::new()));
                    }
                    buckets[value].0 |= rot.support;
                    buckets[value].1.push(rot);
                    for b in bits(rot.support) {
                        top[b] = top[b].max(value + 1);
                    }
                }
                Item::Barrier { .. } => {
                    total += depth;
                    depth = 0;
                    buckets.clear();
                    top = [0; 64];
                }
            }
        }
        total + depth
    }
}
