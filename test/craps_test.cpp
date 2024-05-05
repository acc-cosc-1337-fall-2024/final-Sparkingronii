#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<die.h>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Random Die Roll Between 1 and 6")
{
Die rolls;
REQUIRE(rolls.roll()== 1 ... 6);

}