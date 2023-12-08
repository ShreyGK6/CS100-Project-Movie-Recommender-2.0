#include "settings.h"
#include "preferences.h"
#include "userpass.h"
#include "database.h"
#include "movie.h"
#include "menu.h"
#include "Instructions.h"
#include "movierec.h"
#include <vector>
#include <string>
using namespace std;

int main () {

    userpass setup;
    prefs options;
    setup.startup(options);

    cout << endl << endl;
    
    instructions instructionsPage;
    instructionsPage.display();

    cout << endl << endl;

    menu menuObject;
    searchMovie find;
    menuObject.display(setup, options, find);

    return 0;
}