#include "gtest/gtest.h"
#include "menu.cpp"

TEST(functionsWorking, askingForInputR)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'r');
}

TEST(functionsWorking, askingForInputS)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 's');
}

TEST(functionsWorking, askingForInputP)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'p');
}

TEST(functionsWorking, askingForInputO)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'o');
}

TEST(functionsWorking, askingForInputQ)
{
    menu menuObject;
    EXPECT_EQ(menuObject.askingForInput(), 'q');
}

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

