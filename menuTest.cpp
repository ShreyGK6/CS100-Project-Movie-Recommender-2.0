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

TEST(functionsWorking, askingForInput)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.askingForInput());
}

TEST(functionsWorking, callSettings)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.callSettings());
}

TEST(functionsWorking, callMovieRec)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.callMovieRec());
}

TEST(functionsWorking, callOverview)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.callOverview());
}

TEST(functionsWorking, callSearch)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.callSearch());
}

TEST(functionsWorking, signOut)
{
    menu menuObject;
    EXPECT_NO_THROW(menuObject.signOut());
}

