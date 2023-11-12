#include "setup.h"
#include "settings.h"

#include <iostream>

using namespace std;

int main () {
    Setup setup;
    setup.startup();

    // cout << person.genre << endl;
    // cout << var << endl;

    Settings profile;
    profile.changeprefs(setup);
    return 0;
}