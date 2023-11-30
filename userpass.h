#ifndef __USERPASS_H__
#define __USERPASS_H__

#include "preferences.h"
#include <iostream>
#include <string>
using namespace std;


class userpass {
    friend class Settings;

    public:
    void startup(prefs &pref);
    preferences person;
    


    private:
    void checkuserandpass(prefs &pref);
    string user = "";
    string password = "";
    void resetpass();
    void resetuser();
    void setuser();
    void setpass();
    string getuser();
    int showpass();
    

    
};

#endif // __SETUP_H__