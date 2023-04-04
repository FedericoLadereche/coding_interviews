#pragma once

#include <cstdint>
#include <stdexcept>
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
        Node *next;
    };

    Node *head;
};
