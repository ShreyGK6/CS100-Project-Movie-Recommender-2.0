#include "gtest/gtest.h"
#include "settings.h"
#include "start.h"
#include "database.h"
#include "movie.h"
#include "movierec.h"
#include <vector>
#include <string>
using namespace std;

class MovieRecTest : public ::testing::Test
{
protected:
    Database db;
    void SetUp() override
    {
        Movie movie1("Movie 1", 2022, 8.5, "PG-13", "Action", "Actor1, Actor2", "Director1");
        Movie movie2("Movie 2", 2021, 7.9, "PG", "Crime", "Actor2, Actor3", "Director2");
        Movie movie3("Movie 3", 2010, 6.5, "R", "Drama", "Actor1, Actor2, Actor3", "Director1");
        Movie movie4("Movie 4", 2017, 4.5, "Approved", "Comedy", "Actor1, Actor3", "Director1");
        Movie movie5("Movie 5", 2018, 9.0, "Not Rated", "Action", "Actor3, Actor2", "Director2");
        Movie movie6("Movie 6", 2006, 8.0, "G", "Comedy", "Actor3, Actor1", "Director1");
        Movie movie7("Movie 7", 2004, 8.4, "R", "Crime", "Actor1, Actor2", "Director1");
        Movie movie8("Movie 8", 2003, 8.6, "PG", "Drama", "Actor1", "Director1");
        Movie movie9("Movie 9", 2020, 8.3, "PG-13", "Action", "Actor2", "Director2");
        Movie movie10("Movie 10", 2013, 7.4, "G", "Comedy", "Actor3", "Director3");
        db.insert(movie1);
        db.insert(movie2);
        db.insert(movie3);
        db.insert(movie4);
        db.insert(movie5);
        db.insert(movie6);
        db.insert(movie7);
        db.insert(movie8);
        db.insert(movie9);
        db.insert(movie10);
    }
};

TEST_F(MovieRecTest, RecOverall)
{
    MovieRec movierec;
    struct preferences preference;
    preference.actor = "Actor1";
    preference.genre = "Action";
    preference.age = 18;
    preference.director = "Director1";
    movierec.movieRecommendationOverall(preference);
    // ASSERT_GT(filteredMovies.size(), 0);
}

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

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}