#include <iostream>
#include "movie.h" 
#include <vector>
using namespace std;

Movie::Movie(string &title, int releaseDate, double rating, string &maturityRating, string &genre, string &actor, string &director)
{
    this->title = title;
    this->genre = genre;
    this->maturityRating = maturityRating;
    this->actor = actor;
    this->director = director;
    this->releaseDate = releaseDate;
    this->rating = rating;
}

void Movie::display()
{
    cout << "Title:" << title << endl; 
    cout << "Release Date: " << releaseDate << endl;
    cout << "Rating: " <<rating << endl;
    cout << "Maturity Rating: "<< maturityRating << endl;
    cout << "Genre: " << genre << endl;
    cout << "Actor: " <<actor << endl;
    cout << "Director: " << director << endl;
}

// vector <string> splitStringByComma(string &input){
//     vector <string> result;
//     istringstream stream(input);
//     string token;
//     while (getline(stream, token, ",")){
//         result.push_back(token);
//     }
//     return result; 
// }

// vector <string> Movie::getGenre(){
//     vector <string> genres = splitStringByComma(genre);
//     return genres;
// }

// vector <string> Movie::getActor(){
//     vector <string> actors = splitStringByComma(actor);
//     return actors;
// }

// vector <string> Movie::getDirector(){
//     vector <string> directors = splitStringByComma(director);
//     return directors;
// }

// vector <string> Movie::getMaturityRating(){
//     return maturityRating;
// }

// vector <string> Movie::getReleaseDate(){
//     return releaseDate;
// }
// vector <string> Movie::getRating(){
//     return rating;
// }

