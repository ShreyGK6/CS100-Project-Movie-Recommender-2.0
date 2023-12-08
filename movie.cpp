#include <iostream>
#include "movie.h"
#include "preferences.h"
#include <vector>
#include <sstream>
using namespace std;
Movie::Movie()
{
}
Movie::Movie(string title, int releaseDate, double rating, string maturityRating, string genre, string actor, string director)
{
    this->title = title;
    this->genre = genre;
    this->maturityRating = maturityRating;
    this->actor = actor;
    this->director = director;
    this->releaseDate = releaseDate;
    this->rating = rating;
}

void Movie::display() const
{
    cout << "Title: " << title << endl;
    cout << "\t Release Date: " << releaseDate << endl;
    cout << "\t Rating: " << rating << endl;
    cout << "\t Maturity Rating: " << maturityRating << endl;
    cout << "\t Genre: " << genre << endl;
    cout << "\t Actor: " << actor << endl;
    cout << "\t Director: " << director << endl;
    cout << endl;
}

void trimString(string &str)
{
    while (str.size() > 0 && isspace(str.front()))
    {
        str.erase(str.begin());
    }
    while (str.size() > 0 && isspace(str.back()))
    {
        str.erase(--str.end());
    }
}
vector<string> splitStringByComma(string &input)
{
    vector<string> result;
    istringstream stream(input);
    string token;
    while (getline(stream, token, ','))
    {
        trimString(token);
        result.push_back(token);
    }
    return result;
}

vector<string> Movie::getGenre()
{
    vector<string> genres = splitStringByComma(genre);
    return genres;
}

vector<string> Movie::getActor()
{
    vector<string> actors = splitStringByComma(actor);
    return actors;
}

vector<string> Movie::getDirector()
{
    vector<string> directors = splitStringByComma(director);
    return directors;
}

string Movie::getMaturityRating()
{
    return maturityRating;
}

int Movie::getReleaseDate()
{
    return releaseDate;
}

double Movie::getRating()
{
    return rating;
}

void Movie::setMaturity(prefs options) {
    int age = options.getage();
    if (age > 0 && age < 10)
    {
        if (maturityRating != "G")
        {
            maturityRating = "G";
        }
    }
    else if (age >= 10 && age < 13)
    {
        if (maturityRating != "PG")
        {
            maturityRating = "PG";
        }
    }
    else if (age >= 13 && age < 18)
    {
        if (maturityRating != "PG-13")
        {
            maturityRating = "PG-13";
        }
    }
    else if (age > 18)
    {
        maturityRating = "R";
    }
}

bool Movie::isValidForAge(int age, prefs options)
{
    setMaturity(options);
    if (age > 0 && age < 10)
    {
        if (maturityRating == "G")
        {
            return true;
        }
    }
    else if (age >= 10 && age < 13)
    {
        if (maturityRating == "G" or maturityRating == "PG")
        {
            return true;
        }
    }
    else if (age >= 13 && age < 18)
    {
        if (maturityRating == "G" or maturityRating == "PG" or maturityRating == "PG-13")
        {
            return true;
        }
    }
    else
    {
        return true;
    }
    return false;
}

bool Movie::operator<(Movie other)
{
    return rating < other.rating;
}
