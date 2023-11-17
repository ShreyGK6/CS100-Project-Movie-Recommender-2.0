#include <iostream>
#include "database.h"
#include <vector>

int main() {
  Database db;
  string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
  db.loadFromTSV(filename);
  vector <Movie> RMovies = db.getMoviesbyMaturityRating("R");
  for (int i = 0; i < RMovies.size(); i++){
      RMovies[i].display();
  }
}