#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include "C:\Users\awaki\CLionProjects\Hi-Equals-hi-Final\src\hello.hpp"


TEST_CASE("Base Case-Insensitive Requirements") {
    // "Hi" should equal "hi"
    REQUIRE(strcmp_case_insensitive("Hi", "hi") == 0);

    // Basic alphabetical ordering
    REQUIRE(strcmp_case_insensitive("String one", "string two") < 0);
    REQUIRE(strcmp_case_insensitive("String two", "string one") > 0);
}

TEST_CASE("Skip Spaces Extra Credit") {
    // Mixed spaces and cases should be equal
    REQUIRE(strcmp_case_insensitive("my cool string", "mycoolstring", true) == 0);
    REQUIRE(strcmp_case_insensitive("My Cool String", "MyCoolString", true) == 0);
    REQUIRE(strcmp_case_insensitive("My Cool String", "mycoolstring", true) == 0);

    // Should not be equal
    REQUIRE(strcmp_case_insensitive("Another string", "mycoolstring", true) != 0);
}