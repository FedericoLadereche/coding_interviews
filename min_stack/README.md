# MinStack

## Problem Description

Design a stack that supports `push`, `pop`, `top`, and retrieving the minimum element in constant time.

Implement the `MinStack` class:

- `MinStack()` initializes the stack object.
- `void push(int val)` pushes the element `val` onto the stack.
- `void pop()` removes the element on the top of the stack.
- `int top()` gets the top element of the stack.
- `int getMin()` retrieves the minimum element in the stack.

You must implement a solution with `O(1)` time complexity for each function.

### Example

**Input:**

["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

**Output:**

[null,null,null,null,-3,null,0,-2]

**Explanation:**

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top(); // return 0
minStack.getMin(); // return -2

### Constraints

- -2<sup>31</sup> <= val <= 2<sup>31</sup> - 1
- Methods `pop`, `top`, and `getMin` operations will always be called on **non-empty** stacks.
- At most 3 * 10<sup>4</sup> calls will be made to `push`, `pop`, `top`, and `getMin`.


## Solution

We implemented the MinStack class using a singly linked list with a custom node structure that stores the value, a pointer to the next node, and the minimum value up to that node. The minimum value is updated whenever a new node is pushed onto the stack. This design decision ensures constant time complexity for all operations (push, pop, top, and getMin), as required by the problem statement.

## Tests

We followed Test-Driven Development (TDD) to drive the implementation of the solution. The tests were designed to verify the following aspects:

1. MinStack initialization
2. push function works correctly
3. top method returns the top element of the stack
4. pop method removes the top element if there are any
5. pop method removes the top element and the previous element is the new top element
6. getMin method retrieves the min value of the stack
7. getMin method throws an exception when called on an empty stack
8. getMin method returns the correct min value when the stack has one element
9. Pushing and popping the maximum and minimum allowed values (i.e., INT32_MAX and INT32_MIN)
10. Pushing and popping elements in different orders (e.g., ascending, descending, random)
11. Pushing and popping elements in random order and checking min value

These tests were implemented in the `test_min_stack.cc` file and helped us verify the correctness and performance of our solution.