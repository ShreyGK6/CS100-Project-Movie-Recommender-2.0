#include <string>
#include <iostream>
#include <algorithm>
#include "search.h"
#include "sortSearch.h"
using namespace std;

sortSearch::sortSearch() {}

void sortSearch::sortByReleaseDate() {
   vector <Movie> sortedYearMovies;
        for (int i = 0; i < sortedYearMovies.size(); i++){
        sortedYearMovies[i].display();  
    }
}   

void sortSearch::sortByRating() {
    vector <Movie> sortedByRating;
        for (int i = 0; i < sortedByRating.size(); i++){
        sortedByRating[i].display(); 
    }
}   

void sortSearch::sortDisplay(){
    Database db;
    string filename = "/home/csmajs/ashah174/final-project-smoha095-ashah174-ayama039-skoth011/movies.tsv";
    char choice;
    cout << "Choose sorting option:" << endl;
    cout << "1. Sort by Release Date" << endl;
    cout << "2. Sort by Rating" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == '1') {
        // Perform sorting by release date
        sortByReleaseDate();
        cout << "Movies have been sorted by Release Date." << endl;
        } else if (choice == '2') {
        // Perform sorting by rating
        sortByRating();
        cout << "Movies have been sorted by Rating." << endl;
    } else {
        // Invalid choice, no sorting performed
        cout << "Invalid choice. No sorting performed." << endl;
    }
}