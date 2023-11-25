#ifndef __PREFERENCES_H__
#define __PREFERENCES_H__

#include <iostream>
#include <string>
using namespace std;

struct preferences {        
    int age;
    string genre;
    string director;
    string actor;
    preferences() : age(-1), genre(""), director(""), actor(""){}
};

class prefs {
    friend class Settings;

    public:
    preferences person;
    void setprefs();

    private:
    void setage();
    void setactor();
    void setdirector();
    void setgenre();
    void resetgenre();
    void resetactor();
    void resetage();
    void resetdirector();
    string getgenre();
    int getage();
    string getactor();
    string getdirector();
    
};

#endif // __SETUP_H__