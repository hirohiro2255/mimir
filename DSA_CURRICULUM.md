# Mímir — Data Structures, Algorithms and Analysis Plan
**Version:** 1.0 — 16 November 2026
**Scope:** Project −1; C++11 first; additions to the existing twelve mathematical phases.
**Status:** Approved planning direction from the learner's request. No new DSA implementation is claimed.
**Checkpoint:** −1.0.89 confirmed complete; −1.0.90 pending. This planning discussion does not advance code.

## Purpose and teaching agreement
Choosing representations and algorithms is an explicit learning objective alongside C++ semantics and numerical mathematics. Existing C11/C12/C14/C18/C19 tracks already contain related material, but need a coherent application and verification plan.
The learner writes code under AGENTS.md, with one tiny action, review, verification and confirmation at a time. No fixed deadline, mass implementation assignment or forced architecture. A planned topic is not evidence of mastery.

## Reference books and limits of this review
This plan uses public descriptions and tables of contents, not a claim to have read the complete books or audited every exercise.
- **Goodrich, Tamassia and Mount, Data Structures and Algorithms in C++:** the supplied [Internet Archive record](https://archive.org/details/datastructuresal0000good_b9z1) identifies the 2004 volume, ISBN 0471202088, with restricted full-text access. Its exact chapter mapping is not verified here. The separately labelled [Wiley second-edition contents](https://bcs.wiley.com/he-bcs/Books?action=contents&bcsId=6383&itemId=0470383275) supplement topic selection: ADTs, representations, analysis, lists, trees, heaps, maps and sorting. Second-edition chapter numbers must not be presented as belonging to the supplied volume.
- **Mark A. Weiss, Data Structures and Algorithm Analysis in C++, fourth edition:** [Pearson contents](https://www.pearson.com/en-ca/subject-catalog/p/data-structures-and-algorithm-analysis-in-c-/P200000003459/9780133404210) identify ISBN 9780133404180 and provide chapters on analysis, containers, trees, hashing, heaps, sorting, algorithm design and amortized analysis. Use for translating contracts, invariants and cost arguments into responsible C++ implementations.
- **Cormen, Leiserson, Rivest and Stein, Introduction to Algorithms, fourth edition:** [MIT Press](https://mitpress.mit.edu/9780262046305/introduction-to-algorithms/) and its [official contents](https://mitp-content-server.mit.edu/books/content/sectbyfn/books_pres_0/11599/4e_toc.pdf). Use selected correctness, asymptotic analysis, divide-and-conquer and amortization material. CLRS pseudocode requires deliberate C++11 adaptation; it is not a drop-in implementation. Its scope is much larger than Mímir.
The mapping below is our curriculum design judgment. These are references, not three mandatory cover-to-cover courses, additional mastery benchmarks equivalent to the Stroustrup commitment, or guarantees of full-book coverage. Older C++ examples must be checked against our C++11 ownership and safety rules. No additional purchase is required for the next microstep.

## Three levels of inclusion
1. **Core:** naturally required by the approved numerical engine; introduce when the learner reaches the need.
2. **Conditional:** justify with an actual query, workload or experiment before adding anything. Planning is not feature authorization for adaptive algorithms, caching or an expression parser.
3. **Companion lab / deferred:** useful theory and implementation practice when educationally appropriate, without requiring an engine feature or delaying modernization indefinitely for all three books.

## Phase-to-application map
| Phase | Representation and algorithm focus | Evidence and restraint |
| --- | --- | --- |
| 0: function explorer | Start with scalar input/result. Learn counted traversal for many samples; stream rows first. If results must be retained, a small Sample record and std::vector<Sample>; std::array only for genuinely fixed counts. Linear scans for extrema and validation. | Known positive, zero and negative inputs; count evaluations; compare retaining n rows with streaming. No container is needed for the current two rows. |
| 1: limits/precision | Ordered approach sequences and forward/reverse traversal; fixed-size experiment settings where natural. | State one-sided ordering and finite-value preconditions. Sampling cannot prove a limit. |
| 2: derivatives | Small fixed stencils, bounded loops and evaluation reuse when justified. | Count function evaluations and storage; compare analytical error and roundoff, not just speed. |
| 3: derivative verification | Records for numerical/exact values and errors; one-pass maximum/error summaries. | Define absolute/relative metrics, zero-denominator policy and invalid-result handling. Stream summaries unless detailed reporting requires retention. |
| 4: roots | Bisection as interval-halving with a bracketing invariant; Newton iteration with explicit state and limits. | Continuity/bracket assumptions, termination, stagnation, derivative failure and evaluation budgets. Relate bisection to binary search without treating them as the same problem. |
| 5: scalar optimization | Current/best state and bounded iteration; optional vector of trace records for later plots/exports/comparison. | O(k) iteration work for k steps under a stated per-step cost; O(1) state without a trace versus O(k) retained trace storage. Numerical convergence needs separate assumptions. |
| 6: comparisons | Vector of run-summary records; scans, reductions and fair ranking if required by reporting. | Keep raw time order intact; rank a separate summary collection. Set tie and failure policies, and compare like budgets/accuracy. Sorting is conditional, not necessary for every experiment. |
| 7: integration | Streaming accumulation for quadrature; reuse values at shared nodes where the method warrants it. | Loop invariants and evaluation counts; compare naive/compensated summation where worthwhile. No tree or heap is required for the planned fixed-step methods. |
| 8: scalar ODEs | Current state/time; optional contiguous trajectory records for exports; fixed stage data for a selected Runge–Kutta method. | Distinguish solver state from output history and recurrence from unrestricted recursion. Verify time order, step-size effects, cost and retained memory. |
| 9: Taylor series | Coefficient sequence when a polynomial is retained; Horner evaluation; update successive terms through a recurrence rather than recomputing every power/factorial. | Check coefficient order and degree-zero cases; compare equivalent formulas, operation counts, approximation error and rounding. Dense coefficient vectors suffice for modest degrees. |
| 10: stability | Controlled comparisons of algorithms, traversal orders and accumulation methods. | Same inputs, measured accuracy and stated costs. A mathematically equivalent faster formula can have worse floating-point behavior. |
| 11: workbench | Small configuration/result records, vectors of results; simple command dispatch first. Associative lookup only when actual lookup needs justify it. | Explain ownership, access patterns, duplicate keys and errors. Export, stream, or retain deliberately. Avoid a registry framework for a handful of commands. |

## Explicit DSA learning strands
These overlap C++ tracks rather than creating a second application or a fixed chronological syllabus.

### D01 — Contracts, ADTs and representation
Prerequisites: variables, functions, simple records, loops when needed.
Distinguish an abstract operation from its representation: a sample sequence is a concept; vector storage is one choice. State ordering, validity, ownership and mutation rules.
Evidence: describe the needed operations, compare at least two plausible representations and defend the simpler one. C++ links: C04, C06, C11, C19.

### D02 — Correctness and termination
Start with concrete execution traces; later introduce preconditions, postconditions, loop invariants and decreasing measures. Distinguish mathematical reasoning from finite-precision behavior.
Evidence: explain what remains true during a scan or bisection iteration, show boundary failures and justify a stop condition. Bounded iteration can stop without converging. C++ links: C03, C15, C18.

### D03 — Cost models and asymptotic analysis
Define n (sample count), k (iterations), d (degree), and the cost of a function evaluation before analyzing. Learn exact counts first, then O, Ω and Θ, worst-case versus expected/amortized costs and auxiliary space versus stored output.
Evidence: derive counts, distinguish algorithm work from terminal I/O, and compare counts as n grows. Unit-cost floating-point arithmetic is a model, not an assertion about arbitrary precision or expensive callbacks.
Later, learn vector growth amortization: individual reallocation is linear; append can be amortized constant under the container's guarantees. reserve can reduce reallocations but is not a universal speed guarantee. C++ links: C11, C14, C18.

### D04 — Sequences and C++ representation costs
Use standard containers in the engine. Teach size/capacity, contiguous access, copying/moving, iterator/reference invalidation, bounds, storage lifetime and allocation before clever optimizations.
Evidence: demonstrate the valid range of a scan, diagnose an invalidated reference, and compare streaming with retained records. Avoid replacing a clear standard container with a handwritten container in production.

### D05 — Searching, sorting and reductions
Core: min/max, total/count and filtering/reductions where reports need them.
Conditional: sequential versus binary search for repeated queries in an already ordered retained sample table; std::lower_bound with a suitable comparison and random-access storage. It finds a position, not automatically an exact match or an interpolated answer.
Account for preprocessing: sorting once costs work; sorting before a single query can be wasteful. State the ordering and comparator contract. Reject or handle NaNs before sorting; an ordinary floating-point less-than comparator is not a safe unrestricted ordering in their presence.
Evidence: empty, singleton, duplicate and boundary queries; compare total workload costs. Preserve trajectory order and sorting stability requirements explicitly. C++ links: C11, C12, C14.

### D06 — Recurrence, interval reduction and numerical structure
Core: bisection's interval reduction, sequential solver updates, Taylor-term recurrence and Horner's method.
Evidence: trace states, count arithmetic and callback evaluations, compare space requirements and validate against known values.
For exact interval halving, width after k iterations is initial_width / 2^k. Translate a target width into a logarithmic iteration count with the precise stopping convention stated. Floating-point midpoint stagnation and endpoint equality still need guards. Newton and gradient descent do not inherit that guarantee.
A Taylor-term recurrence is not automatically dynamic programming; memoization requires actual reusable subproblems. C++ links: C03, C04, C14.

### D07 — Measurement and engineering decisions
Once meaningful workloads exist, compare straightforward implementations to one justified improvement. Keep correctness checks separate from timing; document build flags, workload, repeated measurements and noise. Do not benchmark tiny numerical work dominated by console output.
Evidence: predict the cost change, measure relevant sizes, verify numerical accuracy, and explain whether the improvement warrants added state/complexity. Timing alone does not prove asymptotic complexity or numerical validity.

### D08 — Selected implementation labs
Optional, scheduled independently: a tiny dynamic array, linked list, stack/queue, binary search, insertion/merge sort, a binary heap, hash table collision experiments, or a basic search tree.
Each lab has one contract and invariant, focused tests, lifetime/ownership reasoning, complexity analysis and comparison to an appropriate standard-library facility. Start with needed language fundamentals; do not assign them all or begin with templates and raw allocation.
Building from scratch teaches mechanics; using standard implementations in the engine teaches engineering judgment. Both matter. No hand-built container becomes an engine dependency by default.

## Conditional extensions and deferred subjects
| Topic | Inclusion rule |
| --- | --- |
| Prefix sums | Only for many repeated range-sum queries over the same retained data; include preprocessing/storage and rounding effects. Single-pass quadrature does not require them. |
| Hash/ordered maps | Only for real key lookup; compare a tiny linear table first. Explain average versus worst-case costs and deterministic iteration requirements. No floating-point-key memoization by default. |
| Priority queue for interval refinement | Only if adaptive numerical refinement is separately approved after fixed-step foundations; existing integration scope does not silently expand. |
| Recursive worklist/explicit stack | Consider in an approved adaptive method or a lab; account for termination, call-stack depth and evaluation reuse. No parser is implied. |
| Balanced trees, skip lists, B-trees, union-find, graph traversal/shortest paths/MST/flow | Optional labs or later projects with suitable problems. Not natural requirements of this scalar numerical CLI. |
| Greedy algorithms, dynamic programming, backtracking, randomized design | Study selected examples when there is a genuine learning goal or reuse structure. Numerical iteration alone does not make any of these applicable. |
| FFT, matrix algorithms, linear programming, string-matching structures, NP-completeness | Defer to relevant later projects or dedicated study. Do not confuse linear programming with this project's scalar gradient descent. |

## Evidence required before calling a topic learned
Use the existing 0–4 competence rubric. Record a specific subtopic, learner-authored artifact or reasoning, expected/observed behavior, cost assumptions, limitations and one next gap.
For a nontrivial algorithm or representation, eventually demonstrate:
1. Problem, input/output contract and applicability.
2. A hand trace and correctness/termination reasoning appropriate to the learner's level.
3. Independent tiny implementation or justified standard-library use.
4. Boundary tests and numerical checks, when applicable.
5. Time/space reasoning plus ownership/invalidation implications.
6. Comparison with a plausible alternative and a reason to reject unnecessary complexity.
Do these through separate microsteps. No one-turn bundled assignment is implied.

## Current evidence and next action
- Scalar input/output, square function calls, copies, initialization versus reassignment: learner demonstrated these through −1.0.89.
- No arrays/vectors, container implementations, loop invariants, complexity derivations, search/sort implementations, Git initialization or automated tests are confirmed.
- D01–D08 are planned, not assessed as mastered. The square function alone is not proof of algorithm-analysis proficiency.
- Resume **−1.0.90 only**: add const to the by-value parameter in the definition of square below main; keep its earlier declaration unchanged; review the header before compilation. This step has been introduced but not completed.
