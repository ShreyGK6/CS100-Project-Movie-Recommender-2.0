#include "gtest/gtest.h"
#include "settings.h"
#include "preferences.h"
#include "userpass.h"
#include "database.h"
#include "movie.h"
#include "menu.h"
#include "movierec.h"
#include "Instructions.h"
#include <vector>
#include <string>
using namespace std;

TEST (setup2, startup2){
    userpass setup;
    prefs options;
    searchMovie find;
    EXPECT_NO_THROW(setup.startup(options));
}

TEST (settings, changeprefs){
    userpass setup;
    prefs options;
    searchMovie find;
    Settings profile;
    EXPECT_NO_THROW(profile.changeprefs(setup, options));
}

class DatabaseTest : public ::testing::Test
{
protected:
    Database db;
    void SetUp() override
    {
        Movie movie1("Movie 1", 2022, 8.5, "PG-13", "Action", "Actor1", "Director1");
        Movie movie2("Movie 2", 2023, 7.9, "PG", "Comedy", "Actor2", "Director2");
        db.insert(movie1);
        db.insert(movie2);
    }
};

TEST_F(DatabaseTest, GetMoviesByGenre)
{
    vector<string> genre {"Action"};
    vector<Movie> actionMovies = db.getMoviesbyGenre(genre);
    ASSERT_GT(actionMovies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByActor)
{
    vector<string> actor {"Actor1"};
    vector<Movie> actor1Movies = db.getMoviesbyActor(actor);
    ASSERT_GT(actor1Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByDirector)
{
    vector<string> director {"Director1"};
    vector<Movie> director1Movies = db.getMoviesbyDirector(director);
    ASSERT_GT(director1Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByMaturityRating)
{
    vector<Movie> pg13Movies = db.getMoviesbyMaturityRating("PG-13");
    ASSERT_EQ(pg13Movies.size(), 1);
}

TEST_F(DatabaseTest, GetMoviesByReleaseDate)
{
    vector<Movie> year2022Movies = db.getMoviesbyReleaseDate(2022);
    ASSERT_GT(year2022Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByRating)
{
    vector<Movie> ratingMovies = db.getMoviesbyRating(8.5);
    ASSERT_GT(ratingMovies.size(), 0);
}

TEST_F(DatabaseTest, Filter){
    prefs options;
    searchMovie find;
    vector <string> genre {"Comedy, Crime"};
    int age = 18;
    vector <string> actor {"Actor1"};
    vector <string> director {"Director1"};
    vector<Movie> filteredMovies = db.filter(genre, age, actor, director, options);
    ASSERT_EQ(filteredMovies.size(), 1);
}

class MovieTest : public ::testing::Test
{
protected:
    Movie movie;
    void SetUp() override
    {
        string title = "Test Movie";
        int releaseDate = 2023;
        double rating = 7.8;
        string maturityRating = "PG-13";
        string genre = "Action,Adventure";
        string actor = "Actor1,Actor2";
        string director = "Director1,Director2";
        movie = Movie(title, releaseDate, rating, maturityRating, genre, actor, director);
    }
};

TEST_F(MovieTest, Constructor)
{
    string title = "Test Movie";
    int releaseDate = 2023;
    double rating = 7.8;
    string maturityRating = "PG-13";
    string genre = "Action,Adventure";
    string actor = "Actor1,Actor2";
    string director = "Director1,Director2";
    Movie movieObject(title, releaseDate, rating, maturityRating, genre, actor, director);
    ASSERT_EQ(movieObject.getReleaseDate(), 2023);
    ASSERT_EQ(movieObject.getRating(), 7.8);
    ASSERT_EQ(movieObject.getMaturityRating(), "PG-13");
    ASSERT_EQ(movieObject.getGenre(), (vector<string>{"Action", "Adventure"}));
    ASSERT_EQ(movieObject.getActor(), (vector<string>{"Actor1", "Actor2"}));
    ASSERT_EQ(movieObject.getDirector(), (vector<string>{"Director1", "Director2"}));
}

TEST_F(MovieTest, getGenre)
{
    vector<string> genres = movie.getGenre();
    ASSERT_EQ(genres.size(), 2);
    ASSERT_EQ(genres[0], "Action");
    ASSERT_EQ(genres[1], "Adventure");
}

TEST_F(MovieTest, getActor)
{
    vector<string> actors = movie.getActor();
    ASSERT_EQ(actors.size(), 2);
    ASSERT_EQ(actors[0], "Actor1");
    ASSERT_EQ(actors[1], "Actor2");
}

TEST_F(MovieTest, getDirector)
{
    vector<string> directors = movie.getDirector();
    ASSERT_EQ(directors.size(), 2);
    ASSERT_EQ(directors[0], "Director1");
    ASSERT_EQ(directors[1], "Director2");
}

TEST_F(MovieTest, getMaturityRating)
{
    ASSERT_EQ(movie.getMaturityRating(), "PG-13");
}

TEST_F(MovieTest, getReleaseDate)
{
    ASSERT_EQ(movie.getReleaseDate(), 2023);
}

TEST_F(MovieTest, getRating)
{
    ASSERT_EQ(movie.getRating(), 7.8);
}

TEST(functionsWorking, askingForInputR)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'r');
}

TEST(functionsWorking, askingForInputS)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 's');
}

TEST(functionsWorking, askingForInputP)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'p');
}

TEST(functionsWorking, askingForInputO)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'o');
}

TEST(functionsWorking, askingForInputQ)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'q');
}

TEST(functionsWorking, display)
{
    menu menuObject;
    userpass setup;
    prefs options;
    searchMovie find;
    EXPECT_NO_THROW(menuObject.display(setup, options,find));
}

TEST(functionsWorking, options)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.options());
}

TEST(functionsWorking, callSettings)
{
    menu menuObject;
    userpass setup;
    prefs options;
    searchMovie find;
    EXPECT_NO_THROW(menuObject.callSettings(setup, options));
}

TEST(functionsWorking, callMovieRec)
{
    menu menuObject;
    prefs options;
    searchMovie find;
    EXPECT_NO_THROW(menuObject.callMovieRec(options, find));
}

TEST(functionsWorking, callOverview)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.callOverview());
}

TEST(functionsWorking, callSearch)
{
    menu menuObject;
    searchMovie find;
    EXPECT_NO_THROW(menuObject.callSearch(find));
}

TEST(workingFunction, searchDisplay)
{
    instructions instructionsPage;
    EXPECT_NO_THROW(instructionsPage.display());
}



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
    prefs preference;
    preference.person.actor = vector <string> {"Actor1"};
    preference.person.genre = vector <string>{"Action"};
    preference.person.age = 18;
    preference.person.director = vector<string>{"Director1"};
    EXPECT_NO_THROW(movierec.movieRecommendationOverall(preference));
}

TEST_F(MovieRecTest, recByGenre)
{
    MovieRec movierec;
    prefs preference;
    preference.person.genre = vector <string>{"Action"};
    EXPECT_NO_THROW(movierec.movieRecByGenre(preference));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
