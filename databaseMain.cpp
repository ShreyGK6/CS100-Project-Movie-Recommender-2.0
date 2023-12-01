#include <iostream>
#include "database.h"
#include "movierec.h"
#include <vector>

int main()
{
  // Database db;
  // string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
  // db.loadFromTSV(filename);
  // vector<Movie> ageMovies = db.filter("Drama", 13, "Kevin Zaideman", "Christopher Nolan");
  // for (int i = 0; i < ageMovies.size(); i++)
  // {
  //   ageMovies[i].display();
  // }
  // struct preferences preference;
  // preference.actor = "Timothée Chalamet";
  // preference.genre = "Drama";
  // preference.age = 42;
  // preference.director = "Martin Scorsese";
  // MovieRec mr;
  // string genre = "Comedy";
  // mr.movieRecommendationOverall(preference);
  // // mr.movieRecByGenre(genre);
    userpass setup;
    prefs options;
    setup.startup(options);

    cout << endl << endl;
    
    instructions instructionsPage;
    instructionsPage.display();

    cout << endl << endl;

    menu menuObject;
    menuObject.display(setup, options);



    return 0;
}