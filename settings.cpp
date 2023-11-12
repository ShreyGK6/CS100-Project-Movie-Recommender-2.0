#include "settings.h"
#include "setup.h"
#include <iostream>
#include <string>
using namespace std;

// void Settings::ex() {
//     cout << var << endl;
// }

// Settings::Settings ();

void Settings::changeprefs() {
    char answer;

    cout << "Press q to quit or pick an option to change: " << endl;
    cout << "genre (g) \t age (y) \t actor (a) \t director (d)" << endl;

    do {
        cin >> answer;
        answer = tolower(answer);
        if (answer == 'g'){
            while (answer != 'r' || answer != 'e' || answer != 'b'){
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                // cout << person.genre << endl;
                cout << "genre titles" << endl;
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r') {
                    // person.genre = "";
                    cout << "reset" << endl;
                    person.setgenre();
                }
                else if (answer == 'e') {
                    person.setgenre();
                }
                else if (answer == 'b') {
                    answer = 'f';
                }
                else {
                    cout << "Please provide a valid input." << endl << endl;
                }
            }
        }
        else if (answer == 'y'){

        }
        else if (answer == 'a'){
        
        }
        else if (answer == 'd'){

        }
        else {
            cout << "Press q to quit or pick an option to change: " << endl;
            cout << "genre (g) \t age (y) \t actor (a) \t director (d)" << endl;
        }

    }
    while (answer = 'q');

}