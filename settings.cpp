#include <iostream>
#include <string>
using namespace std;

#include "settings.h"
#include "start.h"

// void Settings::ex() {
//     cout << var << endl;
// }

// Settings::Settings ();

void Settings::changeprefs(start &setup)
{
    char answer;

    cout << "----------- PROFILE PAGE ------------" << endl;
    cout << "Press q to quit or pick an option to change: " << endl;
    cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;

    do
    {
        cin >> answer;
        answer = tolower(answer);
        if (answer == 'g')
        {
            while (answer != 'b')
            {
                cout << "Would you like to reset (r) or add on to the existing preference (e)? Or press b to go back." << endl;
                cout << "Current Genre Titles: ";
                setup.showgenre();
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r')
                {
                    setup.resetgenre();
                    setup.setgenre();
                }
                else if (answer == 'e')
                {
                    setup.setgenre();
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
                setup.showage();
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r')
                {
                    setup.resetage();
                    setup.setage();
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
                setup.showactor();
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r')
                {
                    setup.resetactor();
                    setup.setactor();
                }
                else if (answer == 'e')
                {
                    setup.setactor();
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
                setup.showdirector();
                cin >> answer;
                answer = tolower(answer);
                if (answer == 'r')
                {
                    setup.resetdirector();
                    setup.setdirector();
                }
                else if (answer == 'e')
                {
                    setup.setdirector();
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
                setup.showuser();
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
                if (answer == 'r')
                {
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
        cout << "----------- PROFILE PAGE ------------" << endl;
        cout << "Press q to quit or pick an option to change: " << endl;
        cout << "genre (g) \t age (y) \t actor (a) \t director (d) \t username and password (u)" << endl;

    } while (answer != 'q');
}