#include <iostream>
#include <string>
#include "settings.h"
#include "preferences.h"
#include "userpass.h"
using namespace std;


void Settings::changeprefs(userpass &setup, prefs &options) {
    char answer;

    cout << "----------- PROFILE PAGE ------------" << endl;
    cout << "Press m to got to menu or pick an option to change: " << endl;
    cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;

    do
    {
        cin >> answer;
        answer = tolower(answer);
        cout << endl;
        if (answer == 'g'){
            while (answer != 'b'){
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Genre Titles: ";
                vector<string> newgenre;
                options.getgenre(newgenre);
                for (int i = 0; i < newgenre.size(); i ++) {
                    cout << newgenre.at(i) << " ";
                }
                cout << endl;
                cin >> answer;
                cout << endl;
                answer = tolower(answer);
                if (answer == 'r') {
                    options.setgenre(2);
                }
                else if (answer == 'e') {
                    options.setgenre(3);
                }
                else if (answer != 'b')
                {
                    cout << "Please provide a valid input." << endl
                         << endl;
                }
            }
        }
        else if (answer == 'y')
        {
            while (answer != 'b')
            {
                cout << "Would you like to change your age (r)? Or press b to go back." << endl;
                cout << "Current Age: ";
                cout << options.getage() << endl;
                cin >> answer;
                answer = tolower(answer);
                cout << endl;
                if (answer == 'r') {
                    options.resetage();
                    options.setage();
                }
                else if (answer != 'b')
                {
                    cout << "Please provide a valid input." << endl
                         << endl;
                }
            }
        }
        else if (answer == 'a')
        {
            while (answer != 'b')
            {
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Actor/Actresses: ";
                vector<string> newactor;
                options.getactor(newactor);
                for (int i = 0; i < newactor.size(); i ++) {
                    cout << newactor.at(i) << " ";
                }
                cout << endl;
                cin >> answer;
                answer = tolower(answer);
                cout << endl;
                if (answer == 'r') {
                    options.setactor();
                }
                else if (answer == 'e') {
                    options.setactor();
                }
                else if (answer != 'b')
                {
                    cout << "Please provide a valid input." << endl
                         << endl;
                }
            }
        }
        else if (answer == 'd')
        {
            while (answer != 'b')
            {
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Directors: ";
                vector<string> newdirector;
                options.getdirector(newdirector);
                for (int i = 0; i < newdirector.size(); i ++) {
                    cout << newdirector.at(i) << " ";
                }
                cout << endl;
                cin >> answer;
                answer = tolower(answer);
                cout << endl;
                if (answer == 'r') {
                    options.setdirector();
                }
                else if (answer == 'e') {
                    options.setdirector();
                }
                else if (answer != 'b')
                {
                    cout << "Please provide a valid input." << endl
                         << endl;
                }
            }
        }
        else if (answer == 'u')
        {
            while (answer != 'b')
            {
                cout << "Would you like to reset (r), change only the username (u), or only change password (p)? Or press b to go back." << endl;
                cout << "Current Username: ";
                cout << setup.getuser() << endl;
                cout << "Current Password: ";
                int num = setup.showpass();
                for (int i = 0; i < num; i++)
                {
                    cout << "*";
                }
                cout << endl;
                cin >> answer;
                cin.ignore();
                answer = tolower(answer);
                cout << endl;
                if (answer == 'r') {
                    setup.resetpass();
                    setup.resetuser();
                    setup.setuser();
                    setup.setpass();
                }
                else if (answer == 'u')
                {
                    setup.resetuser();
                    setup.setuser();
                }
                else if (answer == 'p')
                {
                    setup.resetpass();
                    setup.setpass();
                }
                else if (answer != 'b')
                {
                    cout << "Please provide a valid input." << endl
                         << endl;
                }
            }
        }
        else if (answer != 'm'){
            cout << "Not a valid input. Please provide a valid input." << endl;
        }
        if (answer != 'm') {
            cout << "Press m to got to menu or pick an option to change: " << endl;
            cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;
        }

    }
    while (answer != 'm');
}