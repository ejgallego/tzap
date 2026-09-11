#!/usr/bin/env python3
"""Exercise the skill's retained-capture importer against tzap's checked archive."""

import argparse
import importlib.util
import json
from pathlib import Path
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--skill-dir', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True, help='Fresh test artifact directory')
    args = parser.parse_args()
    if args.out.exists():
        raise ValueError('Test output must be fresh')
    sys.path.insert(0, str(args.skill_dir / 'scripts'))
    from import_comparison import import_comparison
    from build_review import build
    from review_observations import observations, series, paired

    spec = importlib.util.spec_from_file_location('journey', Path(__file__).with_name('profile-journey.py'))
    journey = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(journey)
    evidence = journey.JOURNEY / 'evidence'
    journey.verify_archive(evidence)
    catalog = journey.read_json(journey.JOURNEY / 'catalog.json')
    args.out.mkdir(parents=True)
    results = []
    for campaign in catalog['experiments']:
        # This performs the project checks BEFORE asserting passed validation.
        rows = journey.load_campaign(evidence, campaign, [])
        capture = evidence / campaign['directory']
        validation = evidence / campaign['validation']
        run = args.out / campaign['id']
        run.mkdir()
        binding = dict(schema='lean-profile-command-validation-alpha',
                       manifest_sha256=journey.digest(capture / 'manifest.json'),
                       runs_sha256=journey.digest(capture / 'runs.jsonl'), checks=[])
        for row in rows:
            stderr = capture / row['stderr']
            binding['checks'].append(dict(sequence=row['sequence'], result='passed',
                scope=row['validation_scope'], artifacts=[
                    dict(path=str(validation.resolve()), sha256=journey.digest(validation),
                         record=f'case {campaign["case"]}: retained QASM equality and identity'),
                    dict(path=str(stderr.resolve()), sha256=journey.digest(stderr),
                         record='Four reported metrics rechecked against the validated campaign')]))
        journey.write_json(run / 'validation.json', binding)
        manifest = import_comparison(capture, run / 'import', boundary=journey.BOUNDARY,
                                     cohort=campaign['case'] + '; original archived cohort',
                                     validation=run / 'validation.json')
        build(manifest, run / 'report')
        imported = journey.jsonl(run / 'import/observations.jsonl')
        journey.require(len(imported) == len(rows), 'Importer dropped observations')
        for original, normalized in zip(rows, imported):
            for key in ['argv', 'elapsed_ns', 'slot', 'phase', 'configuration', 'validated', 'included', 'outcome']:
                journey.require(normalized[key] == original[key], 'Importer changed '+key)
            journey.require(original['block'] == normalized['phase']+'-'+normalized['block'], 'Importer changed block identity')
        for source, copy in [('manifest.json','source-manifest.json'), ('runs.jsonl','source-runs.jsonl'),
                             ('identity-check.json','source-identity.json')]:
            journey.require((capture/source).read_bytes() == (run/'import'/copy).read_bytes(), 'Changed capture snapshot')
        model = journey.read_json(run / 'report/review-data.json')
        groups = observations(('\n'.join(json.dumps(r) for r in rows)).encode(), ['baseline','candidate'], format='jsonl')
        expected = paired({name:series(records) for name,records in groups.items()}, 'baseline','candidate')
        actual = model['comparisons'][0]['statistics']
        for key in ['control','candidate','paired_saving_s','candidate_faster','savings','median_reduction_pct']:
            journey.require(expected[key] == actual[key], 'Importer statistics differ: '+key)
        results.append(dict(id=campaign['id'], observations=len(rows), pairs=actual['control']['n'],
                            statistics_exact=True, source_snapshots_exact=True))

    # A real successful capture without correctness evidence must stay unvalidated.
    manifest = import_comparison(capture, args.out/'unchecked', boundary=journey.BOUNDARY, cohort=campaign['case'])
    build(manifest, args.out/'unchecked-report')
    unchecked = journey.read_json(args.out/'unchecked-report/review-data.json')['comparisons'][0]['statistics']
    journey.require(unchecked['paired_saving_s'] is None and unchecked['control'] is None, 'Exit status inferred validation')
    # A changed binding must fail before making an output directory.
    binding['runs_sha256'] = '0'*64
    journey.write_json(args.out/'wrong-binding.json', binding)
    try:
        import_comparison(capture, args.out/'invalid', boundary=journey.BOUNDARY, cohort=campaign['case'],
                          validation=args.out/'wrong-binding.json')
    except ValueError as error:
        journey.require('does not bind' in str(error), 'Unexpected negative check failure')
    else:
        raise ValueError('Changed binding was accepted')
    journey.require(not (args.out/'invalid').exists(), 'Invalid input created output')
    result = dict(campaigns=results, unvalidated_capture_excluded=True, changed_binding_rejected_before_output=True,
                  checker_sha256=journey.digest(Path(__file__)),
                  importer_sha256=journey.digest(args.skill_dir/'scripts/import_comparison.py'))
    journey.write_json(args.out/'verification.json', result)
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
