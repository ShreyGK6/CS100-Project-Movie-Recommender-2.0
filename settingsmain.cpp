#include "preferences.h"
#include "userpass.h"
#include "settings.h"

#include <iostream>

using namespace std;

int main () {
    userpass setup;
    prefs options;
    setup.startup(options);

    // cout << person.genre << endl;
    // cout << var << endl;

    Settings profile;
    profile.changeprefs(setup, options);
    return 0;
}