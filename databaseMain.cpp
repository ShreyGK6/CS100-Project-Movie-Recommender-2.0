#include <iostream>
#include "database.h"
#include "movierec.h"
#include <vector>

int main()
{
  Database db;
  string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
  db.loadFromTSV(filename);
  // vector<Movie> ageMovies = db.filter("Drama", 13, "Kevin Zaideman", "Christopher Nolan");
  // for (int i = 0; i < ageMovies.size(); i++)
  // {
  //   ageMovies[i].display();
  // }
  struct preferences preference;
  preference.actor = "Cillian Murphy";
  preference.genre = "Action";
  preference.age = 19;
  preference.director = "Christopher Nolan";
  MovieRec mr;
  string genre = "Comedy";
  mr.movieRecommendationOverall(preference);
  // mr.movieRecByGenre(genre);

}