#include <iostream>
#include "database.h" 
#include "search.h"
#include "gtest/gtest.h"
#include <string>
#include <vector>
using namespace std;

TEST(testingFunctions, askForOptions)
{
    searchMovie movie;
    EXPECT_NO_THROW(movie.askingForOption());
}

TEST(testingFunctions, displayOptions)
{
    searchMovie movie;
    EXPECT_NO_THROW(movie.displayOptions());
}

TEST(testingFunctions, searchMain)
{
    searchMovie movie;
    EXPECT_NO_THROW(movie.searchMain());
}

TEST(testingFunctions, otherPathways)
{
    searchMovie movie;
    EXPECT_NO_THROW(movie.otherPathways());
}

TEST(testingFunctions, outputOrError)
{
    searchMovie movie;
    vector<Movie> possibleSelections;
    EXPECT_NO_THROW(movie.outputOrError(possibleSelections));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
  }