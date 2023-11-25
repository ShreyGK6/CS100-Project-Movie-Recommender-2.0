#include "gtest/gtest.h"
#include "settings.h"
#include "preferences.h"
#include "userpass.h"
#include <vector>
#include <string>
using namespace std; 

TEST (setup2, startup2){
    userpass setup;
    prefs options;
    EXPECT_NO_THROW(setup.startup(options));
}

TEST (settings, changeprefs){
    userpass setup;
    prefs options;
    Settings profile;
    EXPECT_NO_THROW(profile.changeprefs(setup, options));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
  }