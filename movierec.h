#ifndef __MOVIEREC_H
#define __MOVIEREC_H
#include "database.h"
#include "settings.h"
#include "start.h"
#include <vector>
#include <string>
using namespace std;

class MovieRec
{
public:
    const int maxMovieShown = 5;
    void movieRecommendationOverall(struct preferences preference);
    void movieRecByGenre(string genre);
};

#endif