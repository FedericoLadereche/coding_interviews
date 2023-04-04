# Code Interviews

This repository contains solutions to various coding interview problems. We cover a wide range of topics, including algorithms, data structures, design patterns, API building, and best practices. Our solutions are implemented in various programming languages and follow Test-Driven Development (TDD). We also provide explanations for our design decisions and justify the chosen stack.

## Table of Contents

1. [Merge Intervals](#merge-intervals)
2. [Min Stack](#min-stack)

## Merge Intervals

**Problem Statement**: Given a collection of intervals, merge any overlapping intervals.

**Languages & Stacks**: [Python](merge_intervals/python)

**Design Decisions**: We used sorting and a stack-based approach to merge the intervals.

**Tests**: The tests cover various cases, such as overlapping intervals, non-overlapping intervals, and edge cases.

[Read More](merge_intervals/README.md)

## Min Stack

**Problem Statement**: Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

**Languages & Stacks**: [C++](min_stack/cpp)

**Design Decisions**: We implemented the MinStack class using a singly linked list with a custom node structure that stores the value, a pointer to the next node, and the minimum value up to that node.

**Tests**: The tests cover various aspects, such as MinStack initialization, push, pop, top, and getMin methods, and edge cases.

[Read More](min_stack/README.md)

## Contributing

We welcome contributions to this repository. If you have a coding interview problem you'd like to add, please follow these steps:

1. Fork the repository.
2. Create a new directory for the problem, following the existing structure (e.g., `problem_name/language`).
3. Implement the solution using TDD and provide a README with an explanation of the design decisions and chosen stack.
4. Create a pull request with your changes.

## License

This project is licensed under the [MIT License](LICENSE).
