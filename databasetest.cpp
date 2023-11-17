#include "gtest/gtest.h"
#include "database.h"
#include "movie.h"
#include <vector>
#include <string>
using namespace std; 

class DatabaseTest : public ::testing::Test {
protected:
    Database db;
    void SetUp() override {
        Movie movie1("Movie 1", 2022, 8.5, "PG-13", "Action", "Actor1", "Director1");
        Movie movie2("Movie 2", 2023, 7.9, "PG", "Comedy", "Actor2", "Director2");
        db.insert(movie1);
        db.insert(movie2);
    }
};

TEST_F(DatabaseTest, GetMoviesByGenre){
  vector<Movie> actionMovies = db.getMoviesbyGenre("Action");
  ASSERT_GT(actionMovies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByActor){
  vector<Movie> actor1Movies = db.getMoviesbyActor("Actor1");
  ASSERT_GT(actor1Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByDirector){
  vector<Movie> director1Movies = db.getMoviesbyDirector("Director1");
  ASSERT_GT(director1Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByMaturityRating){
  vector<Movie> pg13Movies = db.getMoviesbyMaturityRating("PG-13");
  ASSERT_EQ(pg13Movies.size(), 1);
}

TEST_F(DatabaseTest, GetMoviesByReleaseDate){
  vector<Movie> year2022Movies = db.getMoviesbyReleaseDate(2022);
  ASSERT_GT(year2022Movies.size(), 0);
}

TEST_F(DatabaseTest, GetMoviesByRating){
  vector<Movie> ratingMovies = db.getMoviesbyRating(8.5);
  ASSERT_GT(ratingMovies.size(), 0);
}

class MovieTest : public ::testing::Test {
protected:
    Movie movie;
    void SetUp() override {
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

TEST_F(MovieTest, Constructor){
      string title = "Test Movie";
      int releaseDate = 2023;
      double rating = 7.8;
      string maturityRating = "PG-13";
      string genre = "Action,Adventure";
      string actor = "Actor1,Actor2";
      string director = "Director1,Director2";
      Movie movieObject(title, releaseDate, rating, maturityRating, genre, actor, director);
      ASSERT_EQ(movieObject.getReleaseDate(),2023);
      ASSERT_EQ(movieObject.getRating(),7.8);
      ASSERT_EQ(movieObject.getMaturityRating(),"PG-13");
      ASSERT_EQ(movieObject.getGenre(), (vector<string>{"Action", "Adventure"}));
      ASSERT_EQ(movieObject.getActor(), (vector<string>{"Actor1", "Actor2"}));
      ASSERT_EQ(movieObject.getDirector(), (vector<string>{"Director1", "Director2"}));

  }

TEST_F(MovieTest, getGenre){
    vector<string> genres = movie.getGenre();
    ASSERT_EQ(genres.size(), 2);
    ASSERT_EQ(genres[0], "Action");
    ASSERT_EQ(genres[1], "Adventure");
}

TEST_F(MovieTest, getActor){
    vector<string> actors = movie.getActor();
    ASSERT_EQ(actors.size(), 2);
    ASSERT_EQ(actors[0], "Actor1");
    ASSERT_EQ(actors[1], "Actor2");
}

TEST_F(MovieTest, getDirector){
    vector<string> directors = movie.getDirector();
    ASSERT_EQ(directors.size(), 2);
    ASSERT_EQ(directors[0], "Director1");
    ASSERT_EQ(directors[1], "Director2");
}

TEST_F(MovieTest, getMaturityRating){
  ASSERT_EQ(movie.getMaturityRating(),"PG-13");
}

TEST_F(MovieTest, getReleaseDate){
  ASSERT_EQ(movie.getReleaseDate(),2023);
}

TEST_F(MovieTest, getRating){
  ASSERT_EQ(movie.getRating(),7.8);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}