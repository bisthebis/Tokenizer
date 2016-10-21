#include "catch.hpp"
#include "token_utils/mathtokenizer.h"

TEST_CASE("MathTokenizer::isNumber works" "[mathtokenizer]")
{
    auto five = MathTokenizer::isNumber("  5\n");
    REQUIRE((five.first && five.second == 5));

    auto strangeString = MathTokenizer::isNumber("azerty5 !");
    REQUIRE_FALSE(strangeString.first);
}

TEST_CASE("MathTokenizer::isSymbol works" "[mathtokenizer]")
{
    auto add = MathTokenizer::isSymbol("+");
    REQUIRE((add.first && add.second == "+"));

    auto add_expr = MathTokenizer::isSymbol("5 + 3");
    REQUIRE_FALSE(add_expr.first);
}
