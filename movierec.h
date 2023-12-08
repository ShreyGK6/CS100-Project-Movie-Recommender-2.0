#ifndef __MOVIEREC_H
#define __MOVIEREC_H
#include "database.h"
#include "preferences.h"
#include "search.h"
#include "movie.h"
#include <vector>
#include <string>
using namespace std;

class MovieRec
{
public:
    void movieRecommendationoutput(prefs options, searchMovie find);
    const int maxMovieShown = 5;
    void movieRecommendationOverall(prefs pref);
    void movieRecByGenre(prefs pref);
    void movieRecommendationMaturityRating(prefs pref);
    void movieRecommendationsearch(searchMovie find, prefs pref);
};

#endif