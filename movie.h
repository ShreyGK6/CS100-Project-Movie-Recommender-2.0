#ifndef __MOVIE_H
#define __MOVIE_H
using namespace std;

class Movie {
    public:
        string genre; 
        string maturityRating;
        string actor;
        string director;
        int releaseDate;
        string title;
        double rating;

        Movie(string &title, int releaseDate, double rating, string &maturityRating, string &genre,  string &actor, string &director );
        void display();
        // vector <string> getGenre();
        // vector <string> getActor();
        // vector <string> getDirector(); 
        // vector <string> getMaturityRating();
        // vector <string> getReleaseDate();
        // vector <string> getRating();

};

#endif