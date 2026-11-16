# Mímir — Testing, Numerical Verification and C++ Experiments

**The learner writes tests and implementations.** AI follows [AGENTS.md](AGENTS.md), providing feedback, guiding questions and very small illustrations. Tests help demonstrate learning; testing infrastructure itself evolves gradually.

## Staged test infrastructure

1. **Early setup:** check files/directories, compile status, executable behavior and exit status manually. No harness exists yet.
2. **First behavior:** tiny C++11 `if` checks, clear failure messages and nonzero failure exit status.
3. **Growing suite:** separate test executable, tiny reusable helpers only if justified, and eventually `make test`.
4. **Larger engine:** unit tests, regression checks and selected CLI end-to-end verification with no third-party framework.
5. **Modernization:** rerun the known baseline in C++14/17/20/23 and investigate actual differences.

## Numerical checks

Start with `double`. One *possible* finite-value comparison formula is:

```text
abs(actual - expected) <= abs_tol + rel_tol * max(abs(actual), abs(expected))
```

Tolerances depend on mathematical conditioning, scale and method; there is **no universal epsilon**. Check NaN and ±infinity explicitly before comparing. Use exact equality only for cases where exactness is justified.

| Category | Verification examples |
| --- | --- |
| Functions | Known values, correct domain handling and output |
| Limits | Left/right samples and finite-precision pitfalls |
| Derivatives | Analytical references, step-size/error behavior |
| Roots | Known roots, failed brackets, iteration exhaustion |
| Optimization | Known minima, traces, convergence and divergence |
| Integrals | Analytical results, convergence with finer partitions |
| ODEs | Known scalar solutions, time-step effects |
| Taylor | Degree/distance effects against reference functions |
| Stability | Cancellation, overflow, underflow and alternatives |
| Workbench | End-to-end CLI input/output, errors, CSV sanity |

## Test-first cycle (where practical)

Describe one tiny result → learner writes one focused failing test → learner implements minimum behavior → run focused and regression tests → small cleanup if justified → commit once working and understood. A red test may be temporary; don't leave completed behavior in a failing state. **Scaffolding steps can use simpler checks**: don't insist on tests/Git before those systems are created.

## C++ mastery checks beyond runtime tests

For each substantial concept, demonstrate understanding with small activities **one at a time**:

- **Predict and explain** a short program, conversion, overload, object lifetime or container invalidation.
- **Write** a tiny learner-authored example and check what is guaranteed by the standard.
- **Diagnose** a compiler/linker error or warning, including a deliberately non-compiling *isolated* lab.
- **Reason** about ownership, dangling references, exception safety, complexity, concurrency and undefined behavior without relying on any particular UB output.
- **Compare** two designs and explain when *not* to use the more advanced one.
- **Transfer** knowledge to a new task rather than memorizing an example.

A compiler accepting source does not prove correct semantics, a successful run does not prove race freedom, and a passing numerical test does not establish all-condition correctness.

## Debugging and tools (introduced later, as microsteps)

- Understand warnings (`-Wall -Wextra -Wpedantic`), compiler errors, stack traces and debugger use.
- Use AddressSanitizer/UndefinedBehaviorSanitizer **if supported** as defect-finding aids, not proofs of absence of undefined behavior.
- Benchmark reproducible cases, distinguish optimized/debug builds and don't generalize from noise.
- Keep **deliberately broken compiler experiments** outside the required green engine build.
- For concurrency, test and reason about synchronization; don't assume one specific interleaving.

## Modernization regression

Before and after a language-version upgrade: record known inputs/outputs, compiler/library versions, preserve old tests, run unchanged code in the new mode, then introduce *one* facility and measure any effect. Do not demand identical floating-point bit patterns without justification. **Check both language and library feature support**, especially in C++20/23.

## Evidence of C++ understanding

Use the [CPP_CURRICULUM.md](CPP_CURRICULUM.md) 0–4 rubric: explanation, independent application, analysis of failures/alternatives, and transfer. A topic's mere appearance in source code is not proof of mastery. Evidence can cite a milestone or Git commit once available.
