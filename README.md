# Third-Party Attribution and License Notices

This repository contains third-party code, binaries, and data snapshots.
Copyright and intellectual property remain with their original authors and right holders.

## Included Third-Party Components

| Local Directory | Upstream Project | Authors / Right Holders | License / Terms (as provided upstream) |
|---|---|---|---|
| `OpenVSP-main/` | OpenVSP (Vehicle Sketch Pad) | NASA + listed OpenVSP contributors | NASA Open Source Agreement (NOSA) v1.3 (`OpenVSP-main/LICENSE`) |
| `AVL3.52src/` | AVL (Athena Vortex Lattice) | Mark Drela, Harold Youngren, and contributors | GPL terms are declared in source headers (for example `AVL3.52src/src/*.f`); some plot library files include LGPL/GPL notices in file headers |
| `Xfoil699src/` | XFOIL | Mark Drela, Harold Youngren, and contributors | GPL terms are declared in source headers (for example `Xfoil699src/src/*.f`); some plot library files include LGPL/GPL notices in file headers |
| `AeroDes/` | AeroDes | The Regents of the University of California + contributors | BSD 3-Clause style license (`AeroDes/LICENSE.txt`) |
| `AMATUIUCDataBase/` | UIUC Airfoil Coordinates Database (snapshot) | UIUC airfoil database maintainers and original airfoil authors | No standalone license file is included in this local snapshot; preserve attribution and verify redistribution terms for your use case |

## Attribution Notes

- OpenVSP source is included under NOSA v1.3; keep upstream notices and obligations intact when redistributing.
- AVL and XFOIL source files contain per-file copyright and GPL/LGPL notices that must be preserved.
- AeroDes includes its own license text in `AeroDes/LICENSE.txt`.
- UIUC airfoil coordinate files are attributed to the UIUC Airfoil Coordinates Database and the original profile authors.

Reference: UIUC Airfoil Data Site by Prof. Michael Selig  
`https://m-selig.ae.illinois.edu/ads/coord_database.html`

## Redistribution Checklist

- Do not remove or alter upstream license and copyright notices.
- Keep third-party directories and license files together when mirroring or repackaging.
- If you modify third-party code, add clear modification records where required by the upstream license.
- Re-validate license compatibility before commercial distribution.

## Detailed Notices

See `THIRD_PARTY_NOTICES.md` for an expanded attribution summary and compliance notes.
