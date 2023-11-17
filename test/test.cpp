
#include "gtest/gtest.h"
#include "../settings.h"
#include "../start.h"


TEST (setup2, startup2){
    start setup1;
    EXPECT_NO_THROW(setup1.startup());
}

TEST (settings, changeprefs){
    Setup setup1;
    Settings profile;
    EXPECT_NO_THROW(profile.changeprefs(setup1));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}