#include "min_stack.h"
#include <cstdint>
#include <limits>
#include <memory>
#include <algorithm>

MinStack::MinStack() : head_(nullptr)
{
}

/**
 * Creates a new node and updates the head_ pointer with the value, the current minimum, and the next pointer.
 * Both of these operations are O(1), as they don't depend on the size of the stack.
*/
void MinStack::push(int32_t val)
{
    int32_t min_val = (head_ == nullptr) ? val : std::min(val, head_->min);
    head_ = std::make_shared<Node>(val, head_, min_val);
}

/**
 * The function directly returns the value of the top node. 
 * This operation is O(1) since it doesn't depend on the size of the stack.
*/
int32_t MinStack::top()
{
    return head_->val;
}

/**
 * The function updates the head_ pointer to point to the next element in the stack. 
 * This operation is O(1) since it doesn't depend on the size of the stack.
*/
void MinStack::pop()
{
    if (head_ == nullptr)
        throw std::runtime_error("Cannot pop from an empty stack");

    head_ = head_->next;
}

/**
 * The function returns the min value from the stack. 
 * This operation is O(1) since it doesn't depend on the size of the stack.
*/
int32_t MinStack::getMin()
{
    if (head_ == nullptr)
        throw std::runtime_error("Cannot get min from an empty stack");
    
    return head_->min;
}