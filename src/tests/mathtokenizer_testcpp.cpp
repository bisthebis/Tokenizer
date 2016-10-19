#include "catch.hpp"
#include "token_utils/mathtokenizer.h"

TEST_CASE("MathTokenizer::isNumber works" "[mathtokenizer]")
{
    QPair<bool, int> five = MathTokenizer::isNumber("  5\n");
    REQUIRE((five.first && five.second == 5));

    QPair<bool, int> strangeString = MathTokenizer::isNumber("azerty5 !");
    REQUIRE_FALSE(strangeString.first);
}
