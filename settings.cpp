#include "settings.h"
#include <iostream>
#include <string>
using namespace std;



void Settings::startup() {
    char answer;
    int checker = 0;
    cout << "Are you an existing user? (y/n)" << endl; 
    cin >> answer;
    cout << endl;
    while (checker == 0) {
        if (tolower(answer) == 'y') {
            checkuserandpass();
            checker = 1;
        }
        else if (tolower(answer) == 'n') {
            setuserandpass();
            checkuserandpass(); //kind of a useless function bc it doesn't save anyways
                                //have a "q" in main in order to quit the program (for sake of demo) ?
            checker = 1;
        }
        else {
            cout << "That is not a valid response. Please input y or n." << endl;
            cin >> answer;
            cout << endl;
        }
    }
}
void Settings::checkuserandpass() {
    string iuser;
    string ipass;
    int checker = 0;

    if (person.user == "" || person.password == "") {
        cout << "We do not have you in the database. Please make an account:" << endl;
        setuserandpass();
    }
    
    while (checker == 0){
        cout << "Please input your username" << endl;
        cin.clear();
        getline (cin, iuser);
        cout << endl;
        cout << "Please input your password" << endl;
        cin.clear();
        getline(cin, ipass);
        cout << endl;
        cout << "original: " << person.user << endl;
        cout << "original: " << person.password << endl;
        cout << "input: " << iuser << endl;
        cout << "input: " << ipass << endl;  
        if (iuser == person.user && ipass==person.password) {
            //call menu
            cout << "in menu" << endl;
            checker = 1;
        }
        else {
            cout << "Incorrect username or password was given. Please try again." << endl << endl;
        }
    }
}

void Settings::setuserandpass () {
    string iuser;
    string ipass;

    cout << "Please input a username." << endl;
    cin.ignore();
    cin.clear();
    getline(cin, iuser);
    person.user = iuser;
    cout << endl;

    cout << "Please input a password." << endl;
    cin.clear();
    getline (cin, ipass);
    person.password = ipass;
    cout << endl;

}

//preferences function to ask for preferences and stores them
//STORE IN PUBLIC CLASS OF USER PREFERENCES