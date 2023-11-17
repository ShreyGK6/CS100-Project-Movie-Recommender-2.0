#include "gtest/gtest.h"
#include "Instructions.h"

TEST(workingFunction, searchDisplay){
    instructions instructionsPage;
    EXPECT_NO_THROW(instructionsPage.display());
} 

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
  }