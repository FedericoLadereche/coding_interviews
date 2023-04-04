#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"
#include "../solution/min_stack.h"

TEST_CASE("MinStack initialization", "[min_stack_init]")
{
    REQUIRE_NOTHROW(new MinStack());
}

TEST_CASE("MinStack push function works correctly", "[min_stack_push]")
{
    MinStack min_stack;
    REQUIRE_NOTHROW(min_stack.push(5));
}

TEST_CASE("MinStack top method returns the top element of the stack", "[min_stack_top]")
{
    MinStack stack;

    stack.push(42);
    REQUIRE(stack.top() == 42);

    stack.push(24);
    REQUIRE(stack.top() == 24);

    stack.push(55);
    REQUIRE(stack.top() == 55);
}

TEST_CASE("MinStack pop method removes the top element of the stack", "[min_stack_pop]")
{

    SECTION("MinStack pop method throws an exception when called on an empty stack")
    {
        MinStack stack;

        REQUIRE_THROWS_WITH(stack.pop(), "Cannot pop from an empty stack");
    }

    SECTION("MinStack pop method doesn't throw when there are elements to remove from stack")
    {
        MinStack stack;
        stack.push(1);

        REQUIRE_NOTHROW(stack.pop());
    }

    SECTION("MinStack pop method removes the top element and previous element is the new top element")
    {
        MinStack stack;

        stack.push(1);
        stack.push(2);
        stack.pop();

        REQUIRE(stack.top() == 1);
    }
}

TEST_CASE("MinStack getMin method retrieves the min value of the stack", "[min_stack_getMin]")
{
    SECTION("MinStack getMin method throws an exception when called on an empty stack")
    {
        MinStack stack;
        REQUIRE_THROWS_WITH(stack.getMin(), "Cannot get min from an empty stack");
    }

    SECTION("MinStack getMin method returns the correct min value when the stack has one element")
    {
        MinStack stack;
        stack.push(2);

        REQUIRE(stack.getMin() == 2);
    }

    SECTION("MinStack getMin method returns the correct min value with multiple elements in the stack")
    {
        MinStack stack;
        stack.push(1);
        stack.push(5);
        stack.push(3);
        stack.push(7);

        REQUIRE(stack.getMin() == 1);
    }
}

TEST_CASE("MinStack push and pop operations with edge cases", "[min_stack_edge_cases]")
{
    SECTION("Pushing and popping INT32_MAX and INT32_MIN")
    {
        MinStack stack;
        stack.push(INT32_MAX);
        stack.push(INT32_MIN);

        REQUIRE(stack.top() == INT32_MIN);
        stack.pop();
        REQUIRE(stack.top() == INT32_MAX);
        stack.pop();
    }

    SECTION("Pushing and popping elements in ascending order")
    {
        MinStack stack;
        for (int i = 0; i < 10; ++i)
        {
            stack.push(i);
        }

        for (int i = 9; i >= 0; --i)
        {
            REQUIRE(stack.top() == i);
            stack.pop();
        }
    }

    SECTION("Pushing and popping elements in descending order")
    {
        MinStack stack;
        for (int i = 9; i >= 0; --i)
        {
            stack.push(i);
        }

        for (int i = 0; i < 10; ++i)
        {
            REQUIRE(stack.top() == i);
            stack.pop();
        }
    }

    SECTION("Pushing and popping elements in random order")
    {
        MinStack stack;
        std::vector<int> random_order = {3, 7, 1, 8, 2, 5, 6, 0, 4, 9};
        for (int value : random_order)
        {
            stack.push(value);
        }

        std::reverse(random_order.begin(), random_order.end());
        for (int value : random_order)
        {
            REQUIRE(stack.top() == value);
            stack.pop();
        }
    }

    SECTION("Pushing and popping elements in random order and checking min value")
    {
        MinStack stack;
        std::vector<int> random_order = {3, 7, 1, 8, 2, 5, 6, 0, 4, 9};
        std::vector<int> min_values = {3, 3, 1, 1, 1, 1, 1, 0, 0, 0};

        // Push elements onto the stack and check if the min value is as expected.
        for (size_t i = 0; i < random_order.size(); ++i)
        {
            stack.push(random_order[i]);
            REQUIRE(stack.getMin() == min_values[i]);
        }

        // Remove elements from the stack and check if the min value is as expected.
        for (size_t i = random_order.size(); i > 1; --i)
        {
            REQUIRE(stack.getMin() == min_values[i - 1]);
            stack.pop();
        }
    }
}