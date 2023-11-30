#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include "preferences.h"
#include "userpass.h"
// #include <iostream>
// #include <string>
// using namespace std;

class userpass;
class prefs;

class Settings {
    public:
    // Settings();
    void changeprefs(userpass &setup, prefs &options);
    // void ex();


};
#endif // __SETTINGS_H__