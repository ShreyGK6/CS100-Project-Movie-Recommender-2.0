#ifndef __MOVIEREC_H
#define __MOVIEREC_H
#include "database.h"
#include "settings.h"
#include "preferences.h"
#include "menu.h"
#include <vector>
#include <string>
using namespace std;

class MovieRec
{
public:
    const int maxMovieShown = 5;
    void movieRecommendationOverall(prefs pref);
    void movieRecByGenre(string genre);
    void backToMenu();
};

#endif