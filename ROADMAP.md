# Mímir — Overall Roadmap v2.1

**Project −1: C++ Mastery Through a Calculus & Numerical Optimization Engine**

## What changed from v1.0?

The original **12 mathematical phases (0–11) remain intact**. A comprehensive **C++ mastery curriculum** now runs alongside and beyond them, taking the combined breadth of three Stroustrup books as a benchmark. C++ topics not useful in the engine are learned through very small *companion labs*, not forced into production code.

This is a direction-setting roadmap, **not a demand to implement every item now**. The learner writes implementations according to [AGENTS.md](AGENTS.md), taking one tiny step at a time. Use [CPP_CURRICULUM.md](CPP_CURRICULUM.md) for subject coverage and [MILESTONES.md](MILESTONES.md) for actual progress.

## Two parallel paths

| Path | Goal | Evidence |
| --- | --- | --- |
| **Mathematical engine** | Understand calculus and numerical algorithms by developing a real CLI | Working behavior, numerical validation, tests, reproducible experiments |
| **C++ mastery** | Deepen understanding of C++ semantics, design, the standard library and tooling | Learner-written exercises, code explanations, debugging and reasoned verification |

The C++ curriculum is **not divided evenly** among the mathematical phases. Some topics occur early, some are revisited across phases, and newer-standard facilities belong to the modernization journey. Mathematical progress and C++ progress can move at different speeds.

## Explicit DSA application path

[DSA_CURRICULUM.md](DSA_CURRICULUM.md) supplies the detailed phase mapping, selective book references, prerequisites and evidence requirements. This strengthens the existing two paths: algorithms and representation choices connect the mathematical work to C++ engineering.

Core: contracts, invariants, termination, operation counts, time/space complexity, streaming versus retained sequences, reductions, interval halving, and polynomial evaluation. Conditional: searching sorted samples, ranking summaries, maps and other structures when an actual use case justifies them. Optional labs cover selected textbook implementations; graph algorithms, advanced trees, dynamic programming, FFT and other unrelated subjects are deferred rather than forced into the scalar engine.

The original twelve phases and modernization order remain unchanged. No immediate vector, container library, parser, adaptive integration, or new project is assigned.

## Part A — Complete the C++11 engine (12 original phases)

### Phase 0 — Mathematical Function Explorer
- **DSA application:** Streaming/counting samples; records and vectors only when retaining results is needed; scans and explicit operation counts.
- **Math:** function domains/ranges, input/output, sampling, tables and coordinate axes.
- **Engine:** evaluate selected explicit functions, print value tables and simple ASCII graphs.
- **Completion:** verify known values, output consistency and invalid-input handling.
- **C++ opportunities:** program entry, compilation/linking, Make, output/input, fundamental types, expressions, loops, functions, headers and first tests.
- **Boundary:** no general expression parser or GUI.

### Phase 1 — Limits and Numerical Precision
- **DSA application:** Ordered approach sequences, valid traversal and finite-value contracts.
- **Math:** limits, one-sided approaches, continuity and finite precision.
- **Engine:** sample functions approaching a chosen value with adjustable steps.
- **Completion:** demonstrate a valid example and a misleading finite-precision case; handle non-finite values.
- **C++ opportunities:** `double`, conversions, `const`, `std::numeric_limits`, stream formatting and preconditions.
- **Boundary:** numerical sampling does not prove a limit.

### Phase 2 — Numerical Differentiation
- **DSA application:** Fixed stencils, function-evaluation budgets and justified reuse.
- **Math:** derivative and forward, backward and central finite differences.
- **Engine:** approximate derivatives with adjustable step sizes.
- **Completion:** compare against known analytical results; investigate error versus step size.
- **C++ opportunities:** functions, interfaces, parameter passing and focused tests.

### Phase 3 — Derivative Verification
- **DSA application:** Error records and streaming min/max/reduction summaries.
- **Math:** analytical differentiation, chain rule and error metrics.
- **Engine:** compare supplied exact derivatives with numerical approximations.
- **Completion:** correct error reports over representative points; explain numerical discrepancies.
- **C++ opportunities:** lambdas, function objects, modularity, helper tests and clear failure reporting.
- **Boundary:** no symbolic differentiation engine required.

### Phase 4 — Root-Finding Engine
- **DSA application:** Bracketing/termination invariants and interval-halving costs; Newton failure guards.
- **Math:** zeros, bracketing, bisection, Newton's method, convergence and failure.
- **Engine:** scalar bisection and Newton solvers.
- **Completion:** solve valid problems and explicitly report invalid brackets, near-zero derivatives and iteration limits.
- **C++ opportunities:** result types, invariants, error handling and elementary user-defined types.

### Phase 5 — One-Dimensional Optimization
- **DSA application:** Bounded iteration state; optional contiguous traces; distinguish O(1) current state from O(k) retained history.
- **Math:** minima, derivatives, gradient descent, learning rates and stopping rules.
- **Engine:** basic scalar gradient descent and progress traces.
- **Completion:** known minimizers, reproducible traces, divergence/non-convergence cases.
- **C++ opportunities:** data recording, interfaces, const correctness and encapsulation if warranted.

### Phase 6 — Optimization Experiments
- **DSA application:** Comparable run records, scans and conditional ranking; preserve raw trace order.
- **Math:** momentum, learning-rate schedules and fair comparisons.
- **Engine:** evaluate selected variants against baseline gradient descent.
- **Completion:** comparable initial conditions/stopping rules and clear parameter sensitivity.
- **C++ opportunities:** algorithms, callables, possible limited generic programming and benchmarking.
- **Boundary:** stay one-dimensional; multivariable training belongs to later projects.

### Phase 7 — Numerical Integration
- **DSA application:** Streaming accumulation, evaluation reuse and accuracy-aware summation comparisons.
- **Math:** Riemann sums, trapezoidal and Simpson's rules.
- **Engine:** approximate definite integrals by several methods.
- **Completion:** analytical comparisons, convergence observations and invalid-input checks.
- **C++ opportunities:** loops, numeric algorithms, iterators and abstraction over functions.

### Phase 8 — Ordinary Differential Equation Solver
- **DSA application:** Sequential state updates, fixed stage data and optional retained trajectories.
- **Math:** scalar initial-value problems, Euler's method and introductory Runge–Kutta.
- **Engine:** numerical trajectories for simple ODEs.
- **Completion:** compare to known solutions; document time-step effects and limits.
- **C++ opportunities:** structured results, state representation and regression tests.
- **Boundary:** not a PDE/CFD solver.

### Phase 9 — Taylor Series Engine
- **DSA application:** Coefficient sequences, term recurrences and Horner evaluation.
- **Math:** Taylor polynomials, remainder and local approximation error.
- **Engine:** approximations for selected functions.
- **Completion:** investigate degree and distance effects with exact reference values.
- **C++ opportunities:** recurrences, careful numerical looping and, if useful, basic C++11 compile-time expressions.
- **Boundary:** not a general symbolic algebra package.

### Phase 10 — Numerical Stability Laboratory
- **DSA application:** Compare cost and numerical behavior together; reproducible workload and timing discipline.
- **Math:** cancellation, roundoff, conditioning, overflow, underflow and stable formulas.
- **Engine:** reproducible experiments and comparisons of numerical formulations.
- **Completion:** explain observed errors and non-finite behavior with repeatable evidence.
- **C++ opportunities:** floating-point facilities, diagnostics, optimization flags and careful benchmarking.

### Phase 11 — Complete Optimization Workbench
- **DSA application:** Simple result/configuration records; dispatch/lookup representations justified by actual workload.
- **Math/software:** coherent, reproducible numerical experimentation.
- **Engine:** integrated CLI exposing the existing experiments, results, help and selected CSV exports.
- **Completion:** end-to-end workflows, regression/numerical tests, documented limitations.
- **C++ opportunities:** separation of modules, interface design, containers/algorithms, maintainability.
- **Boundary:** no GUI, GPU, tensor engine, full automatic differentiation or neural networks.

## Part A+ — C++11 mastery laboratories

A separate stream of small **independent labs** may be pursued at appropriate moments across Phases 0–11 and, if necessary, after Phase 11 but **before** the modernization stage. These labs use C++11 and the standard library, and they never become mandatory features of the main CLI.

Potential subjects (not immediate assignments):

- Preprocessing, multiple translation units, linking errors and build mechanics.
- Declarations, scope, type conversions, object lifetimes, value categories and overload resolution.
- Pointers, references, ownership, RAII, alignment and carefully reasoned undefined behavior.
- Classes, construction, copying/moving, inheritance, virtual dispatch and exception safety.
- Templates, specialization, traits, SFINAE, variadics and compile-time programming.
- Streams, file I/O, locales, regular expressions, containers, algorithms and iterators.
- Threads, mutexes, futures, atomics and the C++11 memory model in focused labs.
- Time/space complexity, profiling, optimization tradeoffs and program portability.

Being exposed to a feature **does not** count as mastering it; see the evidence rubric in `CPP_CURRICULUM.md`.

## Part B — Modernize the *completed* C++11 engine

The complete C++11 engine and essential C++11 curriculum work must be tested and tagged before moving to C++14. Keep one shared codebase and preserve previous versions in Git.

1. **C++14:** compile unchanged code first; study generalized lambda captures, relaxed `constexpr`, return-type deduction and standard-library additions; apply small justified refactors.
2. **C++17:** study structured bindings, `if constexpr`, `std::optional`, `std::variant`, `std::string_view`, filesystem and other facilities; verify library availability.
3. **C++20:** study concepts, ranges, comparisons, `std::span`, coroutines, modules, concurrency improvements and formatting where supported; keep unsupported topics conceptual or in documented experiments.
4. **C++23:** investigate supported additions such as `std::expected`, `std::mdspan`, `std::print`, ranges improvements and `if consteval`, always checking both the compiler and standard-library implementation.
5. **C++26:** optional later, depending on compiler maturity and educational value.

**Every modernization microstep:** confirm previous baseline → test new language mode unchanged → learn one concept → make a small behavior-preserving refactor only if useful → rerun tests and numerical checks → record/commit. Do not rewrite the engine or require use of every feature in production.

## Dependencies and pace

- Phase 0 begins with elementary C++ and functions; limits/derivatives support Phases 1–6, integration Phase 7, ODEs Phase 8 and Taylor series Phase 9.
- Numerical correctness matters from the first actual numerical calculation, with deeper treatment in Phase 10.
- C++ topics can be previewed, exercised, applied and revisited at greater depth. The number of microsteps is unrestricted.
- **One microstep at a time.** Future subject lists are not simultaneous implementation assignments.
- The mathematical scope remains suitable for learning alongside MathAcademy calculus.

## Current checkpoint — 16 November 2026

**Last confirmed step:** −1.0.89. **Next unfinished step:** −1.0.90, introduced but not completed. The learner verified restored output `3 9` and `4 16`; adding `const` to the function definition's by-value parameter is pending.

This is a documentation update only; no learner source, Makefile, tests or Git state was modified.
