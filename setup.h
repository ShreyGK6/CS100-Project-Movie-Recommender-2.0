#ifndef __SETUP_H__
#define __SETUP_H__

#include <iostream>
#include <string>
#include "settings.h"
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

class Setup {

    public:
    void startup();
    preferences person;
    // int var = 3;


    private:
    void checkuserandpass();
    void setuserandpass();
    void setprefs();
    void setgenre();
    void setage();
    void setactor();
    void setdirector();
    friend class Settings;

    
};





#endif // __SETUP_H__