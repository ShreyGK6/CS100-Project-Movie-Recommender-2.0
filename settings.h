#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <iostream>
#include <string>
using namespace std;

class Settings {
    private:
    string user;
    string password;


    public:
    void startup();
    Settings();


    private:
    void checkuserandpass();
    void setuserandpass();

    
};





#endif // __PERSON_H__