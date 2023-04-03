#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"
#include "../solution/min_stack.h"

TEST_CASE("MinStack initialization") {
    REQUIRE_NOTHROW(MinStack minStack);
}