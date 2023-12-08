#include <iostream>
#include <vector>
using namespace std;

#include "preferences.h"



void prefs::setprefs() { 
    char answer;

    setgenre(1);
    setage();
    cout << endl;
    
    do {
        cout << "Please add additional preferences. If you are done, please enter q." << endl;
        cout << "actor (a) \t director (d)" << endl;
        cin >> answer;
        answer = tolower(answer);
        if (answer == 'a') {
            cout << endl;
            setactor();
        }
        else if (answer == 'd'){
            cout << endl;
            setdirector();
        }
    }
    while (answer != 'q');
    cin.ignore();

}

void prefs::setgenre(int num) {
    char answer;
    int count = 2;
    int checker = 0;
    int message = 0;
    if (num == 1) {
        cout << "Pick a faveorite genre: " << endl;
        cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
    }
    if (num == 2 || num == 3) {
        cout << "Pick a genre! If you are finished, please type q" << endl;
        cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl; 
        count = 1;
        cin >> answer;
        cout << endl;
        if (answer == 'q') {
            checker = 2;
        }
    }
    
    while (answer != 'q' || checker != 2) {
        if (count > 1) {
            cin >> answer;
            cout << endl;
        }
        if (num == 3) {
            count = 3;
        }
        cin.clear();
        answer = tolower(answer);
        if (answer == 'c'){
            string name = "";
            if (count == 1) {
                resetgenre();
            }
            for (int i = 0; i < person.genre.size(); i++){
                if (person.genre.at(i) == "Comedy"){
                    cout << "Already inputted!" << endl;
                    cout << endl;
                    name = person.genre.at(i);
                }
            }
            if (name == ""){
                person.genre.push_back("Comedy");
            }
            count = count + 1;
        }
        else if (answer == 'd'){
            string name = "";
            if (count == 1) {
                resetgenre();
            }
            for (int i = 0; i < person.genre.size(); i++){
                if (person.genre.at(i) == "Drama"){
                    cout << "Already inputted!" << endl;
                    cout << endl;
                    name = person.genre.at(i);
                }
            }
            if (name == ""){
                person.genre.push_back("Drama");
            }
            count = count + 1;
        }
        else if (answer == 'r'){
            string name = "";
            if (count == 1) {
                resetgenre();
            }
            for (int i = 0; i < person.genre.size(); i++){
                if (person.genre.at(i) == "Romance"){
                    cout << "Already inputted!" << endl;
                    cout << endl;
                    name = person.genre.at(i);
                }
            }
            if (name == ""){
                person.genre.push_back("Romance");
            }
            count = count + 1;
        }
        else if (answer == 'a') {
            string name = "";
            if (count == 1) {
                resetgenre();
            }
            for (int i = 0; i < person.genre.size(); i++){
                if (person.genre.at(i) == "Action"){
                    cout << "Already inputted!" << endl;
                    cout << endl;
                    name = person.genre.at(i);
                }
            }
            if (name == ""){
                person.genre.push_back("Action");
            }
            count = count + 1;
        }
        else if (answer == 'q' && person.genre.empty() == true) {
            answer = '!';
            checker = 0;
        }
        else if (answer != 'q') {
            cout << "Not a valid response. Please give a valid response: " << endl;
            cout << endl;
        }
        else if (answer == 'q') {
                checker = 2;
                message = 1;
        }
        if (message != 1) {
            cout << "Pick another genre! If you are finished, please type q" << endl;
            cout << "comedy (c) \t drama (d) \t romance (r) \t action (a)" << endl;
        }
    }
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
        if (count == 1 && answer != "quit") {
            resetactor();
        }
        if (answer != "quit") {
            answer[0] = toupper(answer[0]);
            for (int i = 1; i < answer.length(); i++){
                if (isspace(answer[i]) != 0){
                    i= i + 1;
                    answer[i] = toupper(answer[i]);
                }
                else {
                    answer[i] = tolower(answer[i]);
                }
            }
            person.actor.push_back(answer);
        }
        cout << endl;
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
        if (count == 1 && answer != "quit") {
            resetdirector();
        }
        if (answer != "quit") {
            answer[0] = toupper(answer[0]);
            for (int i = 1; i < answer.length(); i++){
                if (isspace(answer[i]) != 0){
                    i= i + 1;
                    answer[i] = toupper(answer[i]);
                }
                else {
                    answer[i] = tolower(answer[i]);
                }
            }
            person.director.push_back(answer);
        }
        cout << endl;
    }
    while (answer != "quit");
}

void prefs::resetgenre() {
    person.genre.resize(0);
}

void prefs::resetage() {
    person.age = -1;
}

void prefs::resetactor() {
    person.actor.resize(0);
}

void prefs::resetdirector() {
    person.director.resize(0);
}

void prefs::getgenre(vector<string> &newgenre){
    for (int i = 0; i < person.genre.size(); i++) {
        newgenre.push_back(person.genre.at(i));
    }
}

int prefs::getage(){
    return person.age;
}

void prefs::getactor(vector<string> &newactor){
    for (int i = 0; i < person.actor.size(); i++) {
        newactor.push_back(person.actor.at(i));
    }
}

void prefs::getdirector(vector<string> &newdirector){
    for (int i = 0; i < person.director.size(); i++) {
        newdirector.push_back(person.director.at(i));
    }
}

