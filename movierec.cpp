#include <iostream>
#include "movierec.h"
#include "database.h"
#include "settings.h"
#include "start.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void MovieRec::movieRecommendationOverall(struct preferences preference){
    string genre = preference.genre;
    int age = preference.age;
    string actor = preference.actor;
    string director = preference.director;
    Database db;
    string filename = "/home/csmajs/smoha095/final-project-smoha095-ashah174-ayama039-skoth011/ movies.tsv";
    db.loadFromTSV(filename);
    vector <Movie> filteredMovies = db.filter(genre, age, actor, director);
    sort(filteredMovies).begin(), sort(filteredMovies).end();
    for (int i = 0; i < filteredMovies.size(); i++){
        filteredMovies[i].display();
    }
}

void MovieRec::movieRecByGenre(string genre){

    // getMoviesbyGenre()
}

