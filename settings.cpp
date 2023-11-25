#include <iostream>
#include <string>
using namespace std;

#include "settings.h"
#include "preferences.h"
#include "userpass.h"

void Settings::changeprefs(userpass &setup, prefs &options) {
    char answer;

    cout << "----------- PROFILE PAGE ------------" << endl;
    cout << "Press q to quit or pick an option to change: " << endl;
    cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;

    do {
        cin >> answer;
        answer = tolower(answer);
        if (answer == 'g'){
            while (answer != 'b'){
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Genre Titles: ";
                cout << options.getgenre() << endl;
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r') {
                    options.resetgenre();
                    options.setgenre();
                }
                else if (answer == 'e') {
                    options.setgenre();
                }
                else if (answer != 'b') {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }
        }
        else if (answer == 'y'){
            while (answer != 'b'){
                cout << "Would you like to change your age (r)? Or press b to go back." << endl;
                cout << "Current Age: ";
                cout << options.getage() << endl;
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r') {
                    options.resetage();
                    options.setage();
                }
                else if (answer != 'b') {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }

        }
        else if (answer == 'a'){
            while (answer != 'b'){
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Actor/Actresses: ";
                cout << options.getactor() << endl;
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r') {
                    options.resetactor();
                    options.setactor();
                }
                else if (answer == 'e') {
                    options.setactor();
                }
                else if (answer != 'b') {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }
        
        }
        else if (answer == 'd'){
            while (answer != 'b'){
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Directors: ";
                cout << options.getdirector() << endl;
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r') {
                    options.resetdirector();
                    options.setdirector();
                }
                else if (answer == 'e') {
                    options.setdirector();
                }
                else if (answer != 'b') {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }

        }
        else if (answer == 'u'){
            while (answer != 'b'){
                cout << "Would you like to reset (r), change only the username (u), or only change password (p)? Or press b to go back." << endl;
                cout << "Current Username: ";
                cout << setup.getuser() << endl;
                cout << "Current Password: ";
                int num = setup.showpass();
                for (int i = 0; i < num; i++) {
                    cout << "*";
                }
                cout << endl;
                cin >> answer;
                cin.ignore();
                answer = tolower(answer);
                if (answer == 'r') {
                    setup.resetpass();
                    setup.resetuser();
                    setup.setuser();
                    setup.setpass();
                }
                else if (answer == 'u') {
                    setup.resetuser();
                    setup.setuser();
                }
                else if (answer == 'p'){
                    setup.resetpass();
                    setup.setpass();
                }
                else if (answer != 'b') {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }

        }
        cout << "----------- PROFILE PAGE ------------" << endl;
        cout << "Press q to quit or pick an option to change: " << endl;
        cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;

    }
    while (answer != 'q');

}