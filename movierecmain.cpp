#include <iostream>
#include "movierec.h"
#include "database.h"
#include "preferences.h"
#include "movie.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

int main (){

MovieRec recs;
prefs options;
recs.movieRecommendationoutput(options);

    return 0;
}