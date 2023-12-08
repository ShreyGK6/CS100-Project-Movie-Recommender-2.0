#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include "preferences.h"
#include "userpass.h"
#include <iostream>
#include <string>
#include "settings.h"
#include "preferences.h"
#include "userpass.h"
using namespace std;



class userpass;
class prefs;

class Settings
{
public:
    void changeprefs(userpass &setup, prefs &options);
};
#endif // __SETTINGS_H__