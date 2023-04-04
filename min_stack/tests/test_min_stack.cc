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
}