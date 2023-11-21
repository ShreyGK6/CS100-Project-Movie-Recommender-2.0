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
    // start() {}
    // void startup();
    preferences person;
    void setprefs();
    
    // int var = 3;


    private:
    // void checkuserandpass();
    void setage();
    void setactor();
    void setdirector();
    void setgenre();
    void resetgenre();
    void resetactor();
    void resetage();
    void resetdirector();
    // void resetpass();
    // void resetuser();
    // void setuser();
    // void setpass();
    void showgenre();
    void showage();
    void showactor();
    void showdirector();
    // void showuser();
    // int showpass();
    

    
};





#endif // __SETUP_H__