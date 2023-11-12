#include "setup.h"
#include "settings.h"

#include <iostream>

using namespace std;

int main () {
    Setup setup;
    setup.startup();

    Settings profile;
    profile.changeprefs();
    return 0;
}