#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <iostream>
#include <string>
using namespace std;

struct preferences {        //struct for nodes
    int age;
    string genre;
    string director;
    string actor;
    string user;
    string password;
    preferences() : age(-1), genre(""), director(""), actor(""), user(""), password(""){}
};

class Settings {

    private:
    preferences person;

    public:
    void startup();
    // Settings();



    private:
    void checkuserandpass();
    void setuserandpass();

    
};





#endif // __PERSON_H__