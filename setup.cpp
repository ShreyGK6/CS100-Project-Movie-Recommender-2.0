// #include "settings.h"
#include <iostream>
#include <string>
using namespace std;

#include "setup.h"

void Setup::startup() {
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
void Setup::checkuserandpass() {
    string iuser;
    string ipass;
    int checker = 0;

    if (person.user == "" || person.password == "") {
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


void Setup::setprefs() { 
    char answer;

    setgenre();
    setage();

    
    do {
        cout << "Please add additional preferences. If you are done, please enter q." << endl;
        cout << "actor (a) \t director (d)" << endl;
        cin >> answer;
        answer = tolower(answer);
        if (answer == 'a') {
            setactor();
        }
        else if (answer == 'd'){
            setdirector();
        }
    }
    while (answer != 'q');
    cin.ignore();
    

}

void Setup::setgenre() {
    char answer;
    cout << "Pick a faveorite genre: " << endl;
    cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
    cin >> answer;
    
    do {
        cin.clear();
        answer = tolower(answer);
        if (answer == 'c'){
            if (person.genre.find("comedy ") == string::npos){
                person.genre = person.genre + "comedy ";
            }
            else {
                cout << "Already inputted!" << endl;
            }
        }
        else if (answer == 'd'){
            if (person.genre.find("drama ") == string::npos){
                person.genre = person.genre + "drama ";
            }
            else {
                cout << "Already inputted!" << endl;
            }
        }
        else if (answer == 'r'){
            if (person.genre.find("romance ") == string::npos){
                person.genre = person.genre + "romance ";
            }
            else {
                cout << "Already inputted!" << endl;
            }
        }
        else if (answer == 'a') {
            if (person.genre.find("action ") == string::npos){
                person.genre = person.genre + "action ";
            }
            else {
                cout << "Already inputted!" << endl;
            }
        }
        else if (answer == 'q' && person.genre == "") {
            answer = '!';
        }
        else if (answer != 'q') {
            cout << "not a valid response. Please give a valid response: " << endl;
        }
        cout << "Pick another genre! If are finished, please type q" << endl;
        cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
        cin >> answer;
    }
    while (answer != 'q');
}

void Setup::setage() {
    int answer;
    
    cout << "Input age: " << endl;
    cin >> answer;
    person.age = answer;
}

void Setup::setactor(){
    string answer;
    int count = 0;
    
    do{
        cout << "Please type in an actor(ess). Otherwise, type quit to go back." << endl;
        cin.clear();
        if (count == 0) {
            cin.ignore();
        }
        getline (cin, answer);
        count = count + 1;
        if (answer != "quit") {
            for (int i = 0; i < answer.length(); i++ ){
                answer[i] = tolower(answer[i]);
            }
            person.actor = person.actor + answer + " ";
        }
    }
    while (answer != "quit");
}

void Setup::setdirector() {
     string answer;
     int count = 0;
    
    do{
        cout << "Please type in a director. Otherwise, type quit to go back." << endl;
        cin.clear();
        if (count == 0) {
            cin.ignore();
        }
        getline (cin, answer);
        count = count + 1;
        if (answer != "quit") {
            for (int i = 0; i < answer.length(); i++ ){
                answer[i] = tolower(answer[i]);
            }
            person.director = person.director + answer + " ";
        }
    }
    while (answer != "quit");
}

void Setup::resetgenre() {
    person.genre = "";
}

void Setup::resetage() {
    person.age = -1;
}

void Setup::resetactor() {
    person.actor = "";
}

void Setup::resetdirector() {
    person.director = "";
}

void Setup::resetuser() {
    person.user = "";
}

void Setup::resetpass() {
    person.password = "";
}

void Setup::setuser() {
    string iuser;

    cout << "Please input a username." << endl;
    cin.clear();
    getline(cin, iuser);
    person.user = iuser;
    cout << endl;

}

void Setup::setpass() {
    string ipass;

    cout << "Please input a password." << endl;
    cin.clear();
    getline (cin, ipass);
    person.password = ipass;
    cout << endl;
}

void Setup::showgenre(){
    cout << person.genre << endl;
}

void Setup::showage(){
    cout << person.age << endl;
}

void Setup::showactor(){
    cout << person.actor << endl;
}

void Setup::showdirector(){
    cout << person.director << endl;
}

void Setup::showuser(){
    cout << person.user << endl;
}

int Setup::showpass(){
    string pass = person.password;
    int count = 0;

    for (int i = 0; i < pass.length(); i++) {
        count = count + 1;
    }

    return count;
}