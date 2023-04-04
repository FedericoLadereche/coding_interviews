#pragma once

#include <cstdint>
#include <stdexcept>
#include <memory>

class MinStack
{

public:
    MinStack();

    void push(int32_t val);

    int32_t top();

    void pop();

private:
    struct Node
    {
        int val;
        std::shared_ptr<Node> next;

        Node(int value, std::shared_ptr<Node> next_node)
            : val(value), next(next_node) {}
    };

    std::shared_ptr<Node> head_;
};