#include "gtest/gtest.h"
#include "preferences.h"
#include "database.h"
#include "movie.h"
#include "movierec.h"
#include <vector>
#include <string>
using namespace std;



TEST_F(MovieRecTest, RecByGenreComedy)
{
    MovieRec movierec;
    string genre = "Comedy";
    movierec.movieRecByGenre(genre);
    // ASSERT_EQ(comedyMovies.size(), 3);
}

TEST_F(MovieRecTest, RecByAction)
{
    MovieRec movierec;
    string genre = "Action";
    movierec.movieRecByGenre(genre);
    // ASSERT_EQ(actionMovies.size(), 3);
}

TEST_F(MovieRecTest, RecByCrime)
{
    MovieRec movierec;
    string genre = "Crime";
    movierec.movieRecByGenre(genre);
    // ASSERT_EQ(crimeMovies.size(), 2);
}

TEST_F(MovieRecTest, RecByDrama)
{
    MovieRec movierec;
    string genre = "Drama";
    movierec.movieRecByGenre(genre);
    // ASSERT_EQ(dramaMovies.size(), 2);
}

// int main(int argc, char **argv)
// {
//     ::testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }