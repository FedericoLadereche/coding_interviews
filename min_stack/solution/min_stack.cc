#include "min_stack.h"
#include <cstdint>
#include <limits>
#include <memory>

MinStack::MinStack() : head_(nullptr)
{
}

void MinStack::push(int32_t val)
{
     head_ = std::make_shared<Node>(val, head_);
}

int32_t MinStack::top()
{
    return head_->val;
}

void MinStack::pop() {
    if(head_ == nullptr)
        throw std::runtime_error("Cannot pop from an empty stack");
    
    head_ = head_->next;
}