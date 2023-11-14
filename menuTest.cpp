#include "gtest/gtest.h"
#include "menu.cpp"

TEST(functionsWorking, display)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.display());
}

TEST(functionsWorking, options)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.options());
}
