#ifndef __PREFERENCES_H__
#define __PREFERENCES_H__

#include <iostream>
#include <vector>
using namespace std;

struct preferences {        
    int age;
    vector<string> genre;
    vector<string> director;
    vector<string> actor;
    preferences() : age(-1){}
};

class prefs {
    friend class Settings;
    friend class MovieRec;

    public:
    preferences person;
    void setprefs();
    void getgenre(vector<string> &newgenre);
    int getage();
    void getactor(vector<string> &newactor);
    void getdirector(vector<string> &newdirector);

    private:
    void setage();
    void setactor();
    void setdirector();
    void setgenre(int num);
    void resetgenre();
    void resetactor();
    void resetage();
    void resetdirector();
    
};

#endif // __SETUP_H__