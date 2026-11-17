# Mímir — WatchAndCode Review and Teaching Agreement

**Review date:** 17 November 2026  
**Status:** Adopted teaching addition; documentation saved in the revised package.  
**Checkpoint:** −1.0.127 complete; −1.0.128 introduced and awaiting learner submission.

## Purpose and decision

The learner requested that WatchAndCode's teaching approach be incorporated where it naturally complements Mímir. We adopted compatible practices as an addition to the existing agreement. Preserve learner-written implementation code, extremely tiny steps, review and confirmation, C++11 first, GNU Make, standard-library-only implementation, the three-book Stroustrup benchmark and the selective DSA plan.

This is our adaptation of publicly described practices. It is not WatchAndCode's complete curriculum or an affiliated program. The teaching discussion itself does not advance implementation progress.

## Public sources inspected

The assistant read these public sources during the review. The dates shown for articles are their stated publication dates; all were reviewed in this conversation on 17 November 2026.

| Source | URL | Relevance |
| --- | --- | --- |
| Homepage | https://watchandcode.com/ | Current public positioning: feedback, independent practice and depth |
| Program description | https://watchandcode.com/program/ | Mental simulation, experiments, reflection and assessment |
| Curriculum | https://watchandcode.com/curriculum/ | Requirements, diagrams, documentation, debugging and algorithm reasoning |
| Teaching features | https://watchandcode.com/features/ | Detailed reviews, mastery, correctness, performance and design |
| Programming Foundations Live description and syllabus | https://watchandcode.com/programming-foundations-live/ | Mental models, natural-language reasoning and adversarial thinking |
| Gordon Zhu, A Brief History of Watch and Code, October 2022 | https://watchandcode.com/blog/a-brief-history-of-watch-and-code/ | Evolution from tutorials and code reading toward assessment-centered teaching |
| Gordon Zhu, How to Think About "this" in JavaScript, May 2023 | https://watchandcode.com/blog/this/ | Public example of explicit reasoning and targeted experiments |
| Gordon Zhu, How to be great at asking coding questions, September 2016 | https://medium.com/@gordon_zhu/how-to-be-great-at-asking-questions-e37be04d0603 | Reproduction, expected versus actual behavior, hypotheses and evidence |

Private lessons, assessments, grading rubrics and internal teaching materials were not accessed. The review establishes what the provider publicly describes and shows, not an independent measurement of educational effectiveness. Testimonials were not treated as proof of effectiveness. Older historical descriptions are not automatically the complete current method.

## Findings and our assessment

The program description emphasizes mentally simulating execution, testing hypotheses, examining misconceptions and improving one's problem-solving process. The curriculum describes memory/scope diagrams, comparisons between expectations and observations, requirements-based development, debugger use and strategic documentation reading.

The features page emphasizes detailed review, demonstrated mastery, independent algorithm development, complexity analysis and correctness reasoning. The live-course syllabus emphasizes a mental model of computation, translating natural-language reasoning into code and looking for ways an argument or program could fail.

The founder's historical account distinguishes earlier tutorials and code-reading instruction from later assessment-centered teaching. The JavaScript article demonstrates explicit analysis through examples and targeted experiments; its JavaScript rules are not C++ rules. The question-asking article emphasizes understanding relevant code, reproducing a problem, separating expectations from observations and reporting troubleshooting evidence.

**Our judgment:** these practices fit naturally with Mímir's existing tiny-step, learner-authored approach. They can strengthen independent reasoning without replacing the established curriculum or pace. This is an adaptation decision, not a verified replication of the provider's system.

## Standing adaptations

1. **Predict before executing when useful.** Sometimes ask for the learner's result and justification before revealing an expectation or running a check.
2. **Trace execution explicitly.** Follow a few statements, variable values, function calls, stream states or control-flow decisions. Use small diagrams or state tables when helpful.
3. **Begin with a tiny behavioral requirement.** Let the learner describe what must happen before choosing syntax.
4. **Investigate one hypothesis at a time.** Separate expectation, observation, possible explanation and the next distinguishing experiment into tiny actions.
5. **Review reasoning alongside code.** Examine correctness, assumptions, clarity and alternatives. Introduce cost analysis when a real workload warrants it.
6. **Provide occasional independent variations.** Revisit a concept in a small unfamiliar situation, reducing scaffolding when readiness is demonstrated.
7. **Reflect after meaningful misconceptions.** Identify the assumption that changed and how a similar issue could be recognized later.

These are available teaching practices, not seven compulsory activities for every exchange. Preserve one extremely tiny action, a concrete check and a stop point. Predictions and explanations may be separate microsteps. Do not replace useful verification with constant questioning.

## Guidance and boundaries

The program description withholds hints after certain quiz failures. Mímir preserves graduated assistance: an independent attempt, a focused question, a small hint and clearer explanation when needed. Productive thought does not require indefinite withholding of help.

The assistant must not generate full reference implementations. Compare reasoning, traces, learner-written alternatives or tiny illustrations within the existing 2–5-line guidance. AGENTS.md remains unchanged and primary.

Build mental models appropriate to C++11: scope, lifetime, copies, references and stream behavior as they arise. Do not transfer JavaScript semantics. Experiments illustrate behavior under stated assumptions; one observed run does not establish a portable language guarantee. Do not use undefined behavior as a prediction exercise.

Keep program correctness, numerical error, convergence and computational cost distinct. Tests, proofs and measurements supply different forms of evidence. A working guided microstep does not automatically establish independent mastery; retain the existing 0–4 rubric.

Do not import the provider's entire algorithms or web curriculum. No new engine features, enrollment, deadlines, recurring meetings or mandatory assessment schedule are implied. Detailed human faculty review, live peer interaction and the provider's private assessment system are not reproduced by this chat.

## Examples from this session

- The assistant often revealed expected output before execution. Occasionally letting the learner predict first will provide stronger evidence of their reasoning.
- The learner initially wrote std::cin.fail(); without printing its result. A future similar situation can begin with a focused question about where the returned value goes, allowing the learner to discover the missing connection.
- The learner initially attributed independent argument/parameter names to pass-by-value. The clarification distinguished scope/name independence from copying semantics. This is focused introductory evidence, not full-track mastery.

## Current state and maintenance

The empty failure-condition block was reviewed in −1.0.127. Adding a statement returning 1 in −1.0.128 is awaiting submission. Compilation of that conditional edit, early termination and its exit status are not verified. All implementation state is learner-reported; the repository and project archives have not been independently inspected.

DEVELOPMENT.md owns the standing workflow; MILESTONES.md and SESSION_HANDOFF.md own confirmed progress and the next action. Preserve this review and its limits in later handoffs. Update the agreement deliberately when evidence or learner preferences change.
