#include <iostream>
#include <string> 

using namespace std;

int main()
{
    cout << "Reboot the computer and try to connect. " << endl;
    cout << "Did that fix the problem? " << endl;
    string choice;
    string answer;
    answer = "yes";
    string answer2;
    answer2 = "no";

    cin >> choice;
    if (choice == answer2 || choice == answer)
    {
        if (choice == answer2)
        {
            cout << "Reboot the router and try to connect" << endl;
            cout << "Did that fix the problem? " << endl;
            cin >> choice;
            if (choice == answer2 || choice == answer)
            {
                if (choice == answer2)
                {
                    cout << "Make sure the cables between the router and modem are plugged in firmly." << endl;
                    cout << "Did that fix the problem? " << endl;
                    cin >> choice;
                    if (choice == answer2 || choice == answer)
                    {
                        if (choice == answer2)
                        {
                            cout << "Move the router to a new location." << endl;
                            cout << "Did that fix the problem? " << endl;
                            cin >> choice;
                            if (choice == answer2 || choice == answer)
                            {
                                if (choice == answer2)
                                {
                                    cout << "Get a new router." << endl;
                                }
                                else
                                {

                                }
                            }
                            else
                            {
                                cout << "Please enter only yes or no as your response!" << endl;
                            }
                        }
                        else
                        {

                        }
                    }
                    else
                    {
                        cout << "Please enter only yes or no as your response!" << endl;
                    }
                }
                else
                {

                }
            }
            else
            {
                cout << "Please enter only yes or no as your response!" << endl;
            }
        }
        else
        {

        }
    }
    else
    {
        cout << "Please enter only yes or no as your response!" << endl;
    }
    return 0;
}