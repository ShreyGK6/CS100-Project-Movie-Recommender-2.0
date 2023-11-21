// #include "settings.h"
#include <iostream>
#include <string>
using namespace std;

#include "preferences.h"



void prefs::setprefs() { 
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

void prefs::setgenre() {
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

void prefs::setage() {
    int answer;
    
    cout << "Input age: " << endl;
    cin >> answer;
    person.age = answer;
}

void prefs::setactor(){
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

void prefs::setdirector() {
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

void prefs::resetgenre() {
    person.genre = "";
}

void prefs::resetage() {
    person.age = -1;
}

void prefs::resetactor() {
    person.actor = "";
}

void prefs::resetdirector() {
    person.director = "";
}

void prefs::showgenre(){
    cout << person.genre << endl;
}

void prefs::showage(){
    cout << person.age << endl;
}

void prefs::showactor(){
    cout << person.actor << endl;
}

void prefs::showdirector(){
    cout << person.director << endl;
}

