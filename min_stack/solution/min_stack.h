#pragma once

#include <cstdint>
class MinStack
{

public:
    MinStack();

    void push(int32_t val);

    int32_t top();

private:
    struct Node
    {
        int val;
        Node *next;
    };

    Node *head;
};
