#ifndef __START_H__
#define __START_H__

#include <iostream>
#include <string>
// #include "settings.h"
using namespace std;

struct preferences {        
    int age;
    string genre;
    string director;
    string actor;
    string user;
    string password;
    preferences() : age(-1), genre(""), director(""), actor(""), user(""), password(""){}
};

class start {
    friend class Settings;
    public:
    start() {}
    void startup();
    preferences person;
    
    // int var = 3;
    
    private:
    void checkuserandpass();
    void setprefs();
    void setage();
    void setactor();
    void setdirector();
    void setgenre();
    void resetgenre();
    void resetactor();
    void resetage();
    void resetdirector();
    void resetpass();
    void resetuser();
    void setuser();
    void setpass();
    void showgenre();
    void showage();
    void showactor();
    void showdirector();
    void showuser();
    int showpass();
};





#endif // __SETUP_H__