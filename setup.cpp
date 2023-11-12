#include "setup.h"
#include "settings.h"
#include <iostream>
#include <string>
using namespace std;



void Setup::startup() {
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

void Setup::setuserandpass () {
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

void Setup::setprefs() { 
    char answer;

    setgenre();
    setage();

    cout << "Please add additional preferences. If you are done, please enter q." << endl;
    do {
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
    

}

void Setup::setgenre() {
    char answer;
    cout << "Pick a faveorite genre: " << endl;
    cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
    
    do {
        cin >> answer;
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
        else {
            cout << "not a valid response. Please give a valid response: " << endl;
        }
        cout << "Pick another genre! If are finished, please type q" << endl;
        cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
    }
    while (answer != 'q');
    cout << person.genre << endl;
}

void Setup::setage() {
    int answer;
    
    cout << "Input age: " << endl;
    cin >> answer;
    person.age = answer;
}

void Setup::setactor(){
    string answer;
    
    do{
        cout << "Please type in an actor(ess). Otherwise, type exit to go back." << endl;
        cin.clear();
        getline (cin, answer);
        for (int i = 0; i < answer.length(); i++ ){
            answer[i] = tolower(answer[i]);
        }
        person.actor = person.actor + answer + " ";
    }
    while (answer != "quit");
}

void Setup::setdirector() {
     string answer;
    
    do{
        cout << "Please type in a director. Otherwise, type exit to go back." << endl;
        cin.clear();
        getline (cin, answer);
        for (int i = 0; i < answer.length(); i++ ){
            answer[i] = tolower(answer[i]);
        }
        person.director = person.director + answer + " ";
    }
    while (answer != "quit");
}

//preferences function to ask for preferences and stores them
//STORE IN PUBLIC CLASS OF USER PREFERENCES 