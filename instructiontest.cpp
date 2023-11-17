#include "gtest/gtest.h"
#include "instructions.cpp"

TEST(workingFunction, searchDisplay){
    instructions instructionsPage;
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "Hi! Welcome to our movie recommender, where we give you recommendations based on your preferences!")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "You can set up your profile and edit it at anytime.")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "We have features such as:")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "- R: see your movie recommendations")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "- S: searh for movie based on genre, actor, director, etc.")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "Movies can also be sorted out by year!")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "- P: see your settings and change things such as password and username.")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "- Q: Which is to sign out.")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "You can then sort these by release date and movie rating.")
    EXCPECT_EQ(nstructionsPage.searchDisplay(), "Type M to go to menu and get movie recommendations!")
} 