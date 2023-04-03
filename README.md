# Merge Intervals

## Problem Statement

Given a collection of intervals, merge any overlapping intervals.

### Input

The input is a list of intervals, where each interval is represented as a list of two integers `[start, end]`. The `start` integer is the start of the interval, and the `end` integer is the end of the interval. Intervals may or may not be sorted in any particular order.

### Output

The output should be a list of merged intervals, with overlapping intervals combined into single intervals.

### Example

Given the following input intervals:

[[1, 3], [2, 6], [8, 10], [15, 18]]


The output should be:

[[1, 6], [8, 10], [15, 18]]

Explanation: The intervals `[1, 3]` and `[2, 6]` overlap, so they are merged into `[1, 6]`. The other intervals do not overlap, so they remain unchanged.

## Solution

The solution is implemented in Python and can be found in the `merge_intervals.py` file. We used Test-Driven Development (TDD) to create a series of test cases and iteratively refine the solution. The tests can be found in the `test_merge_intervals.py` file.

We have two implementations of the merge function:

1. The first implementation uses a traditional iterative approach. The time complexity of this solution is O(n * log n), and the space complexity is O(n), where n is the number of input intervals.

2. The second implementation uses a functional programming approach with the `reduce` function. The time complexity and space complexity is the same as in the first implementation, O(n * log n) and O(n), respectively.