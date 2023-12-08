#include "Instructions.h"
#include <iostream>
#include <string>
using namespace std;

instructions::instructions()
{}

void instructions::display(){
    cout << "Hi! Welcome to our movie recommender, where we give you recommendations based on your preferences!" << endl;
    cout << "You can set up your profile and edit it at anytime." << endl; 
    cout << "We have features such as:" << endl;
    cout << " - r: see your movie recommendations" << endl;
    cout << " - s: searh for movie based on genre, actor, director, etc." << endl; 
    cout << "Movies can also be sorted out by year!" << endl;
    cout << " - p: see your settings and change things such as password and username." << endl;
    cout << " - q: Which is to sign out." << endl;
    cout << "You can then sort these by release date and movie rating." << endl;
    cout << "Type m to go to menu and get movie recommendations!" << endl;

    char userkey;
    cin >> userkey;
    while (userkey != 'm') {
        cout << "Type m to go to menu and get movie recommendations!" << endl;
        cin >> userkey;
    }
    
    
    

    




    
}