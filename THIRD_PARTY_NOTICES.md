# THIRD-PARTY NOTICES

This repository includes software and datasets from multiple upstream projects.
This file is a practical attribution summary and does not replace original licenses.

## 1) OpenVSP

- Local path: `OpenVSP-main/`
- Upstream: OpenVSP (Vehicle Sketch Pad)
- Upstream license file: `OpenVSP-main/LICENSE`
- Declared license: NASA Open Source Agreement (NOSA) v1.3
- Copyright:
  - The OpenVSP license file lists NASA and named contributors.

Notes:
- Keep the complete NOSA text with any redistribution of OpenVSP code.
- If modifications are made, maintain modification records in line with NOSA requirements.

## 2) AVL

- Local path: `AVL3.52src/`
- Upstream: AVL (Athena Vortex Lattice)
- License evidence in this snapshot:
  - File headers in `AVL3.52src/src/*.f` declare GPL terms (typically "GPL v2 or later").
  - Additional notices are present in `AVL3.52src/src/gpl.txt`.
  - Some `plotlib` sources include LGPL/GPL notices in file headers.
- Copyright:
  - Mark Drela, Harold Youngren, and additional contributors in newer modules.

Notes:
- Preserve per-file headers when redistributing or modifying.
- Treat mixed-license files conservatively and keep all upstream notices.

## 3) XFOIL

- Local path: `Xfoil699src/`
- Upstream: XFOIL
- License evidence in this snapshot:
  - File headers in `Xfoil699src/src/*.f` declare GPL terms (typically "GPL v2 or later").
  - `plotlib` sources include LGPL/GPL notices in file headers.
- Copyright:
  - Mark Drela, Harold Youngren, and contributors.

Notes:
- Preserve original source headers and notices.
- Keep accompanying documentation and notice text with redistribution.

## 4) AeroDes

- Local path: `AeroDes/`
- Upstream: AeroDes
- Upstream license file: `AeroDes/LICENSE.txt`
- Declared license style: BSD 3-Clause
- Copyright:
  - The Regents of the University of California and contributors.

Notes:
- Keep the license text and disclaimer in source and binary redistributions.

## 5) UIUC Airfoil Coordinate Dataset Snapshot

- Local path: `AMATUIUCDataBase/coord_seligFmt/`
- Upstream source reference:
  - UIUC Airfoil Data Site, Prof. Michael Selig
  - https://m-selig.ae.illinois.edu/ads/coord_database.html
- Content:
  - Airfoil coordinate `.dat` files from multiple original airfoil authors/sources.

Notes:
- This local snapshot does not include a standalone license document.
- Preserve source attribution and verify redistribution rights for your target use.

## Repository-Level Statement

- This repository aggregates third-party materials for research and development workflows.
- No third-party authorship is claimed by this repository for upstream code/data.
- Original licensing terms always prevail over this summary.
