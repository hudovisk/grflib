#include <catch2/catch.hpp>

#include "file.h"

TEST_CASE( "grflib helloWorld should return 10") {
    GRF::File file(".\\event.grf");
    std::string signature = "Master of Magic";

    REQUIRE(signature.compare(file.getHeader().signature) == 0);
}