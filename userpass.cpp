#include <iostream>
#include <string>
using namespace std;

#include "userpass.h"

void userpass::startup() {
    char answer;
    int checker = 0;
    cout << "Are you an existing user? (y/n)" << endl; 
    cin >> answer;
    cin.ignore();
    cout << endl;
    while (checker == 0) {
        if (tolower(answer) == 'y') {
            checkuserandpass();
            checker = 1;
        }
        else if (tolower(answer) == 'n') {
            cout << "------------- CREATE ACCOUNT -----------" << endl;
            setuser();
            setpass();
            checkuserandpass(); //kind of a useless function bc it doesn't save anyways
                                //have a "q" in main in order to quit the program (for sake of demo) ?
            setprefs();
            checker = 1;
        }
        else {
            cout << "That is not a valid response. Please input y or n." << endl;
            cin >> answer;
            cout << endl;
        }
    }
}
void userpass::checkuserandpass() {
    string iuser;
    string ipass;
    int checker = 0;

    if (user == "" || password == "") {
        cout << "We do not have you in the database. Please make an account:" << endl;
        cout << endl;
        cout << "------------- CREATE ACCOUNT -----------" << endl;
        setuser();
        setpass();
        setprefs();
    }

    cout << "---------- SIGN IN ---------" << endl;

    
    while (checker == 0){
        cout << "Please input your username" << endl;
        cin.clear();
        getline (cin, iuser);
        cout << endl;
        cout << "Please input your password" << endl;
        cin.clear();
        getline(cin, ipass);
        cout << endl;  
        if (iuser == user && ipass==password) {
            //call menu
            cout << "in menu" << endl;
            checker = 1;
        }
        else {
            cout << "Incorrect username or password was given. Please try again." << endl << endl;
        }
    }
}

void userpass::resetuser() {
    user = "";
}

void userpass::resetpass() {
    password = "";
}

void userpass::setuser() {
    string iuser;

    cout << "Please input a username." << endl;
    cin.clear();
    getline(cin, iuser);
    user = iuser;
    cout << endl;

}

void userpass::setpass() {
    string ipass;

    cout << "Please input a password." << endl;
    cin.clear();
    getline (cin, ipass);
    password = ipass;
    cout << endl;
}

void userpass::showuser(){
    cout << person.user << endl;
}

int userpass::showpass(){
    string pass = person.password;
    int count = 0;

    for (int i = 0; i < pass.length(); i++) {
        count = count + 1;
    }

    return count;
}