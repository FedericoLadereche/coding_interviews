#include "min_stack.h"
#include <cstdint>

MinStack::MinStack() : head(nullptr)
{
}

void MinStack::push(int32_t val)
{
    Node *new_node = new Node{val, head};
    head = new_node;
}

int32_t MinStack::top()
{
    return head->val;
}

void MinStack::pop() {
    throw std::runtime_error("Cannot pop from an empty stack");
}
