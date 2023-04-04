#pragma once

#include <cstdint>
#include <stdexcept>
#include <memory>

class MinStack
{
public:
    /** Initializes the MinStack object */
    MinStack();

    /**
     * Pushes an element onto the stack
     * @param val: the value to be pushed onto the stack
     **/
    void push(int32_t val);

    /**
     * Returns the top element of the stack
     * @return: the value of top element of the stack
     */
    int32_t top();

    /**
     * Removes the top element from the stack
     * @throws std::runtime_error if the stack is empty
     */
    void pop();

    /**
     * Returns the min value of the stack
     * @return: the min value of the stack
     */
    int32_t getMin();

private:
    /** Node structure for the stack */
    struct Node
    {
        int val;
        std::shared_ptr<Node> next;

        Node(int value, std::shared_ptr<Node> next_node)
            : val(value), next(next_node) {}
    };

    /** Pointer to the top of the stack */
    std::shared_ptr<Node> head_;
};