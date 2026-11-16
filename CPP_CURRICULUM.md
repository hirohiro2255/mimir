# Mímir — Comprehensive C++ Mastery Curriculum v1.1

## Purpose

This document makes Project −1 a **serious, long-term C++ education** alongside its existing calculus and numerical analysis engine. Topic selection and breadth are benchmarked against the combination of:

- Bjarne Stroustrup, [*Programming: Principles and Practice Using C++*, 3rd edition](https://www.stroustrup.com/programming.html) ([table of contents](https://www.stroustrup.com/PPP3_TOC.pdf)).
- Bjarne Stroustrup, [*The C++ Programming Language*, 4th edition](https://www.stroustrup.com/4th.html) ([extended table of contents](https://www.stroustrup.com/4thContents.html)).
- Bjarne Stroustrup, [*A Tour of C++*, 3rd edition](https://www.stroustrup.com/tour3.html) ([table of contents](https://www.stroustrup.com/tour3toc.pdf)).

**Interpretation:** these books provide a breadth/depth *benchmark*, not a claim of book affiliation, copied exercises, exact chapter equivalence, or automatic mastery. Their emphasis differs: introductory learning and programming practice; comprehensive C++11-era language/library treatment; and a modern high-level C++20-oriented survey. The third edition of *Programming* uses C++20/23 and its GUI examples use Qt, so our **C++11-first, standard-library-only** path cannot follow its code or version order literally. We instead preserve the user's chosen sequential modernization plan.

## Fundamental commitments

1. **The original 12 mathematical phases are preserved.** See [ROADMAP.md](ROADMAP.md).
2. **C++11 comes first.** Fully complete and verify the original engine in C++11; use extra C++11-only companion labs for subjects outside normal engine needs.
3. Then progress **C++14 → C++17 → C++20 → C++23**, optionally C++26 when supported. Learn each feature in a tiny lab before any justified engine refactor.
4. **No external C++ libraries**, including test/GUI/math/ML libraries; standard-library-only labs are welcome. Toolchain command-line tools are allowed as developer tools when introduced deliberately.
5. **The learner writes the code.** AI follows unchanged [AGENTS.md](AGENTS.md): explanation, review, guiding questions, a few illustrative lines at most.
6. **No upper bound on microsteps.** One tiny action/idea at a time, including revisits and failure analysis. Planning a track does not mean assigning all its work now.
7. **Depth over mere exposure.** A topic is complete only with learner-produced evidence. We do not distort the core numerical architecture to showcase syntax.

## Mastery rubric for *each* important topic

| Level | Name | What can be demonstrated |
| --- | --- | --- |
| **0** | Not yet studied | No demonstration recorded |
| **1** | Recognize | Explain key words, meaning, constraints and likely errors |
| **2** | Apply | Independently write and test a minimal example or use the concept in the engine |
| **3** | Analyze | Predict edge cases; interpret diagnostics; distinguish alternatives, ownership, lifetime, complexity or failure modes |
| **4** | Transfer/teach | Apply correctly in a new context and explain when **not** to use it |

A topic is not considered **deeply mastered** until Level 4 (or a documented alternative demonstrating equivalent understanding). Some advanced topics may remain at Levels 1–3 until more projects provide realistic practice. **Never check off a track simply because a compiler accepted a line of code.**

### Learning activities (one at a time, not one assignment bundle)

- Make a prediction about a two- or three-line example, then verify where execution is defined.
- Write one tiny learner-authored experiment, run a targeted test or study a diagnostic.
- Draw a stack/heap/lifetime picture or trace the operation of an overload/iterator.
- Compare two approaches and discuss their invariants, complexity, safety and clarity.
- Review a deliberately invalid *compilation* exercise separately from the main green build.
- Revisit a concept months later through a harder, unfamiliar problem.

## Part I — C++11 foundations, core engine and companion labs

The following tracks are **thematic**, not fixed chronological weeks. Overlap is intentional. The engine provides authentic practice where suitable; a small separate lab handles topics that would otherwise make Mímir less maintainable.

### C01 — Toolchain, compilation, linking and program organization

**Learn deeply:** source files, translation units, lexical processing/preprocessing, `#include`, declarations vs definitions, separate compilation, linker errors, symbols/linkage, namespaces, header guards, include dependencies, ODR, static libraries as a concept, compiler flags, executables, Make targets/prerequisites/recipes, incremental builds and rebuild correctness.

**Engine anchor:** current Phase 0, expanding later as modules emerge.

**Evidence:** explain compile versus link; independently diagnose a missing definition; build two source files using a tiny Makefile; demonstrate a change that does and does not trigger rebuild.

**Progress (16 November 2026):** **introduced and practiced**: first C++11 program compiled, executed and output checked; Make targets, TAB-indented recipes, source prerequisites, timestamp-based rebuilding, forced rebuilds with `make -B`, warnings, `-g`, `-O0`, and variable definition `CXX = clang++`. **Next microstep is −1.0.33**, referencing that variable in the recipe. This is not completion of the C01 track.

### C02 — Fundamental types, objects, values and conversions

**Learn deeply:** integer/character/floating/bool types, signedness, `sizeof`, implementation-dependent representation, literals/suffixes, `void`, objects and storage, declarations and definitions, type aliases, `auto`/`decltype`, list/copy/direct initialization, scope, `const`, `constexpr`, implicit promotions, narrowing, casts and their dangers.

**Engine anchor:** sampled function inputs, numeric algorithms, command-line parameters.

**Evidence:** predict several conversion results; explain why a narrowing conversion matters; compare initialization choices; use `std::numeric_limits` to test assumptions.

### C03 — Expressions, statements and flow control

**Learn deeply:** precedence/associativity versus evaluation order, arithmetic/relational/logical/bitwise operators, assignment, short-circuiting, `if`/`switch`, `for`/`while`/range-for, loops and invariants, `break`/`continue`, recursion versus iteration, undefined/unspecified/implementation-defined behavior and boundary conditions.

**Engine anchor:** numerical iterations and CLI validation.

**Evidence:** trace control flow, prove a simple loop invariant, identify a subtle overflow or evaluation-order misconception, test an edge case.

### C04 — Functions, interfaces and modularity

**Learn deeply:** declarations/definitions, signatures and overload resolution, argument evaluation, pass-by-value/pointer/reference, defaults, return types, `inline`, function pointers and callables, lambdas and captures, namespaces, internal/external linkage, `noexcept` meaning, contracts/preconditions, basic recursion, API design.

**Engine anchor:** function sampling, derivative callbacks, root finding, integral evaluators.

**Evidence:** choose sensible argument types; predict selected overloads; separate numerical logic from printing; diagnose a declaration/definition mismatch.

### C05 — Memory model, pointers, arrays and object lifetime

**Learn deeply:** address spaces as an implementation concept, automatic/static/thread/dynamic storage duration, pointers and references, pointer arithmetic and array bounds, C arrays, pointer-to-member, alignment, lifetime and temporary extension, lvalue/xvalue/prvalue categories, constness of pointees/pointers, dangling pointers and invalidated references, strict lifetime/aliasing principles, `nullptr` and safe alternatives.

**Engine anchor:** standard containers, temporary results and function inputs. **Extra labs** for raw arrays and memory models.

**Evidence:** draw and explain lifetimes, predict reference invalidation, distinguish owning and non-owning relationships, identify an invalid pointer expression *without depending on undefined runtime output*.

### C06 — User-defined types and class fundamentals

**Learn deeply:** `struct`/`class`, access control, members, constructors, initializer lists, default arguments, destructors, invariants, member functions/`const`, `this`, static members, `enum class`, unions and their constraints, conversion constructors, `explicit`, overloaded operators, friends and user-defined literals.

**Engine anchor:** well-defined solver parameter/result types. **Extra labs** for unions/operator overloads where unnecessary in the engine.

**Evidence:** explain the representation invariant of a learner-created type; check construction/destruction; choose whether an operator overload has clear semantics.

### C07 — Resource management, copying and moving

**Learn deeply:** RAII, value semantics, Rule of Zero/Three/Five, copy construction/assignment, move construction/assignment, `std::move` and move validity, `std::forward` in appropriate generic contexts, exception safety of operations, `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`, custom deleters, containers as owners, deterministic resource release.

**Engine anchor:** results/collections, file streams and resource ownership. **Extra labs** for manually managed resources.

**Evidence:** explain every ownership edge in a small class, predict operations under copying/moving, demonstrate RAII cleanup when an exception occurs, reject unnecessary shared ownership.

### C08 — Dynamic polymorphism and OO design

**Learn deeply:** interfaces/abstract types, inheritance, virtual dispatch, overriding, final/override, virtual destructors, object slicing, RTTI and `dynamic_cast`, multiple/virtual inheritance as a carefully scoped advanced subject, composition versus inheritance, Liskov-style substitutability and when dynamic polymorphism is a bad fit.

**Engine anchor:** *usually a companion lab*, because Mímir should not be built around a forced class hierarchy.

**Evidence:** explain dispatch and destructor behavior; identify slicing; compare a variant-like/data-driven approach with virtual polymorphism; defend composition when appropriate.

### C09 — Templates and generic programming

**Learn deeply:** function/class templates, template argument deduction, instantiation and linkage, non-type parameters, specialization/partial specialization, variadic templates and parameter packs, dependent names, typename/template disambiguators, overload resolution, SFINAE, type traits, tag dispatch, generic algorithms, template compilation cost and readable diagnostics.

**Engine anchor:** only when a genuinely generic mathematical interface is needed; otherwise separate labs.

**Evidence:** implement a small correct generic operation, explain a failed substitution, inspect a trait, identify unnecessary abstraction, and diagnose template compilation errors.

### C10 — Compile-time reasoning and language mechanics

**Learn deeply:** C++11 `constexpr` restrictions, constant expressions, `static_assert`, `decltype`, `std::integral_constant`, type deductions, perfect forwarding, reference collapsing, value categories and move effects, overload sets, initialization subtleties, basic metaprogramming and the tradeoff between compile-time and runtime algorithms.

**Engine anchor:** tiny invariants/constants; harder mechanics in labs.

**Evidence:** distinguish compile-time from runtime evaluation, reason about deduction and reference categories, interpret a `static_assert` failure.

### C11 — Standard library vocabulary and containers

**Learn deeply:** `std::string`, `std::array`, `std::vector`, `std::deque`, linked lists, associative and unordered containers, `std::pair`/`std::tuple`, utilities, ownership and invalidation rules, allocator concepts, capacity versus size, complexity, exception behavior and choosing the simplest container.

**Engine anchor:** sampled data, traces, result collections, CSV rows. **Extra labs** for containers that have no engine use.

**Evidence:** select a container based on access/update patterns, predict invalidation under insertion, explain complexity and memory implications, choose not to roll a container prematurely.

### C12 — Iterators, algorithms and functional-style C++

**Learn deeply:** iterator categories, valid iterator pairs, range concepts as an idea, standard algorithms (`find`, `sort`, `transform`, `accumulate`, etc.), projections through callables, predicates, lambdas, function objects, captures and lifetimes, iterator invalidation, generic complexity and algorithm preconditions.

**Engine anchor:** sampling, tabulation, comparing optimization traces.

**Evidence:** replace one handwritten loop only where an algorithm is clearer, explain required iterator category, predict invalidation or aliasing mistakes.

### C13 — Text, streams, parsing and file systems

**Learn deeply:** character types/encodings at a practical level, `std::string`, C strings, formatted/unformatted stream I/O, stream state, manipulators, string streams, locale as a concept, files and error states, regular expressions, introductory parsing and safe input handling. C++17 `std::string_view` and filesystem come later.

**Engine anchor:** CLI prompts, table formatting and CSV exports. **Extra labs** for regex and input formats not needed in the core engine.

**Evidence:** explain EOF/fail/bad states, recover from invalid input deliberately, design an unambiguous file format and distinguish a string's value from a non-owning view.

### C14 — Numerics, randomness, time and representation

**Learn deeply:** `<cmath>`, `<limits>`, `<numeric>`, floating-point limitations, integer overflow, numeric conversions, `std::complex`, standard random-number engines/distributions, `std::chrono`, mathematical constants as a future-standard topic, stable algorithms, rounding modes where appropriate, conditioning versus stability and basic numerical complexity.

**Engine anchor:** almost every mathematical phase, particularly 1–10. **Extra labs** for RNG, complex numbers and unrelated numerical facilities.

**Evidence:** justify tolerances and compare algorithms against known values; explain why a random engine is not the same as a distribution; measure durations without confusing noise with improvement.

### C15 — Errors, exceptions, invariants and robustness

**Learn deeply:** invalid input versus programming defects, assertions, exception types and propagation, stack unwinding, `noexcept`, exception-safety guarantees (basic/strong/no-throw), invariant preservation, early return, error codes/results, safe cleanup, contracts as a design concept and limitations of diagnostics.

**Engine anchor:** invalid domains, root-finding failures, non-convergence, file errors.

**Evidence:** describe the state after failure, compare two error-reporting designs, demonstrate cleanup and identify where an exception should be caught.

### C16 — Concurrency and the memory model

**Learn deeply:** C++11 `std::thread`, joining/detaching, mutexes, lock guards, condition variables, futures/promises, `std::async`, atomics, memory ordering, happens-before, data races, deadlocks, false sharing as a performance concern and nondeterministic testing. Modern synchronization facilities arrive in later standards.

**Engine anchor:** **separate labs initially**. The single-threaded numerical CLI remains valid and simpler.

**Evidence:** reason about thread lifetime and synchronization, identify a potential race/deadlock, contrast mutex versus atomic where suitable, explain why observed successful runs do not prove race freedom.

### C17 — Low-level facilities, hardware and C interoperability

**Learn deeply:** storage and alignment, object representation, bits/bytes and bitwise operations, C arrays/pointers, common ABI concerns, `extern "C"`, compatibility limits with C, unsigned arithmetic, code/data layout as an implementation-dependent investigation, cache locality and tradeoffs, macros/preprocessing costs, program startup/termination and portability.

**Engine anchor:** tiny independent experiments, occasional performance observations.

**Evidence:** describe assumptions explicitly, separate portable C++ guarantees from compiler/OS behavior, interpret a debugger memory view cautiously, identify when a high-level abstraction is safer.

### C18 — Software engineering, testing and tooling

**Learn deeply:** source control, small commits, build rules, warnings, compile/link flags, debugging and stack traces, regression/unit/CLI tests, golden outputs where appropriate, numerical oracles, simple property/metamorphic tests, sanitizers, profiling, benchmarking, API stability, code review, refactoring and documenting tradeoffs.

**Engine anchor:** continuous across all phases.

**Evidence:** diagnose a real issue, state a reproducer, write a failing test when meaningful, make a small fix, verify no regressions and explain the change.

### C19 — C++ design principles and programming paradigms

**Learn deeply:** procedural decomposition, object-oriented and generic styles, value semantics, abstraction barriers, data-oriented considerations, type safety, RAII, zero-cost abstractions as a design goal, interface versus implementation, ownership, explicit dependencies, maintainability and appropriate restraint.

**Engine anchor:** evolve existing mathematical functions into a coherent workbench without overengineering.

**Evidence:** justify design alternatives with specific costs/benefits; explain why a feature does *not* belong in a given module; identify a misleading or brittle abstraction.

### C20 — History, standardization and compatibility

**Learn deeply:** C++98/03 heritage, reasons for C++11 changes, language/library distinction, ISO standard versus implementation support, C and C++ compatibility, feature-test macros, deprecations and portability, compiler diagnostics and evolving idioms.

**Engine anchor:** C++11 baseline and every modernization checkpoint.

**Evidence:** classify a facility by earliest standard, explain a portability or backwards-compatibility trap and demonstrate a small version-specific feature probe.

## Part II — C++ standard progression and advanced facilities

These stages are **sequential**, not simultaneous. The C++11 engine is completed and tagged *before* C++14 modernization begins. Learner-written experiments may document unsupported features in theory; a feature is **not** marked runnable until verified using both the local compiler and standard library.

### M14 — C++14

Topics to study incrementally include generalized lambda captures, generic lambdas, return type deduction, relaxed `constexpr`, variable templates, binary literals/digit separators, `std::make_unique`, selected library refinements and the differences from prior C++11 practices.

**Evidence:** write tiny programs contrasting C++11 and C++14 behavior; demonstrate one justified improvement without changing engine results.

### M17 — C++17

Topics include structured bindings, `if constexpr`, inline variables, fold expressions, class template argument deduction, nested namespace notation, `std::optional`, `std::variant`, `std::any`, `std::string_view`, `std::filesystem`, `std::invoke`/`std::apply`, parallel algorithms where supported and selected library utilities.

**Evidence:** explain ownership and lifetimes (especially non-owning views), choose between optional/variant/exception/status, and use new facilities only where they clarify designs.

### M20 — C++20

Topics include concepts and constraints, ranges/views, three-way comparison, designated initializers, `consteval`/`constinit`, further `constexpr`, `std::span`, coroutines, modules, `std::format` where available, calendar/time-zone utilities, `std::jthread`, stop tokens, latches/barriers/semaphores, atomic improvements and the revised memory/library landscape.

**Evidence:** explain template error improvements with a concept; demonstrate a small range pipeline; investigate suspension/resumption in a minimal coroutine example; distinguish modules from headers. **Module/library support on Apple Clang must be checked rather than assumed.**

### M23 — C++23

Topics to investigate, subject to feature support: `std::expected`, `std::print`, `std::mdspan`, `std::generator` where available, `if consteval`, explicit object parameters, `std::ranges` additions, `std::flat_map`/`flat_set`, `std::move_only_function`, further `constexpr` and standard-library refinements. A feature's standard designation **does not guarantee** it is available on the installed macOS toolchain.

**Evidence:** maintain a tiny compiler/library support log; test a focused example; explain why or why not a production refactor is justified.

### M26 — Optional future topics

No requirement or present support claim. Study only if the relevant standard and tools mature and there is educational benefit.

## Part III — Book coverage crosswalk (high-level, not chapter-by-chapter duplication)

The following map reflects the **published book descriptions and tables of contents**. It is a planning aid, not a line-by-line audited equivalence.

| Learning emphasis | Primary curriculum tracks | Source inspiration |
| --- | --- | --- |
| Introductory programming, correctness, style, practice | C01–C04, C13, C15, C18–C19 | *Programming: Principles and Practice*, 3rd ed. |
| Classes, user-defined types, abstraction, templates and ownership | C05–C10, C19 | *The C++ Programming Language*, 4th ed.; *A Tour*, 3rd ed. |
| Standard-library strings, streams, containers, iterators and algorithms | C11–C14 | All three books, different depth/levels |
| Detailed language rules and low-level facilities | C02–C10, C15, C17, C20 | *The C++ Programming Language*, 4th ed. |
| Concurrency and advanced library utilities | C14–C16 | *The C++ Programming Language*, 4th ed.; *A Tour*, 3rd ed. |
| Modern concepts, ranges, coroutines and library evolution | M20–M23 | *A Tour*, 3rd ed.; *Programming*, 3rd ed. |
| Program organization, troubleshooting, numerics and software development | C01, C14–C15, C18–C20 | Across the three books and Mímir's own numerical project |

**Known scope differences:** *Programming*, 3rd ed., presents graphics/GUI with a Qt-based support library; **Qt is not permitted** under Mímir's standard-library-only rule. We may learn the general UI design ideas conceptually but will not claim to have implemented that particular GUI material. The later C++20/23 content is learned in the appropriate modernization stage rather than during the C++11 build. Some highly specialized C++ library and language corners may require dedicated companion labs to reach book-comparable breadth; those gaps must be recorded rather than silently declared complete.

## Part IV — Evidence register and ongoing maintenance

A track status starts as **not assessed** unless the learner has actually demonstrated something. Use Level 0–4 and record a short example of verified evidence, not just a date. We may add a more detailed topic-level checklist *as the learner reaches that track*, not pre-generate thousands of unreviewed checkboxes.

| Track | Current evidence | Level / status |
| --- | --- | --- |
| C01 — Toolchain/build | Learner-reported: compiled C++11 `main`, ran it, observed exit status/output, practiced Make targets/prerequisites/recipes, timestamp behavior, `make -B`, warning/debug/optimization flags and `CXX` variable definition through −1.0.32 | **1–2 for introductory subtopics only**, not assessed for full track |
| C02 — Types | Encountered `int main()`, but no depth assessment recorded | Not assessed |
| C13 — I/O | Used `std::cout` for a hello message, but no depth assessment recorded | Not assessed |
| C03–C12, C14–C20 | No mastery evidence documented yet | Not assessed |
| M14, M17, M20, M23 | Not started; C++11 engine first | Not started |

**Important distinction:** user-reported completed steps are trusted as progress reports, not direct external code inspection. We have not yet claimed a full code review or test suite.

When revising this document, record:

- **Topic / standard:** one clearly scoped concept (e.g., C++11 const-reference lifetime).
- **Learner evidence:** short description of experiment, explanation or test.
- **Verification:** actual compiler, result, expected/observed behavior, or reasoned static analysis.
- **Level:** 0, 1, 2, 3 or 4; identify uncertainty honestly.
- **Reference:** milestone or Git commit/tag if available.
- **Next gap:** one narrow concept; make it the next microstep only when relevant.

## What this curriculum deliberately does *not* demand

- The learner need not implement a compiler, standard library, full GUI toolkit, operating system, tensor package or debugger to learn C++ deeply.
- No feature is required in production code solely to satisfy a checklist.
- No one response should generate whole code files, huge TODO sections or days of implementation.
- No arbitrary deadline, fixed number of steps, or unearned certification of mastery.
- Not every possible C++ specification detail will become a full standalone engine feature; genuinely relevant depth is demonstrated through *appropriate experiments and explanations*.

**Immediate next action is microstep −1.0.33**, substituting `$(CXX)` for the literal compiler command in the existing recipe. This does not imply C01 mastery; do not jump to concurrency, templates or C++23 simply because this curriculum mentions them.
