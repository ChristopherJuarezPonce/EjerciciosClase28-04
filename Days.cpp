#include <iostream>

using namespace std;


int main()
{

    int number;

    // Prompt the user to enter a number
    cout << "Enter a number from 1 to 7:" << endl;
    cin >> number;

    // Check which day it corresponds to
    if (number == 1)
    {
        cout << "Your number corresponds to a weekday (Monday)." << endl;
    }
    else if (number == 2)
    {
        cout << "Your number corresponds to a weekday (Tuesday)." << endl;
    }
    else if (number == 3)
    {
        cout << "Your number corresponds to a weekday (Wednesday)." << endl;
    }
    else if (number == 4)
    {
        cout << "Your number corresponds to a weekday (Thursday)." << endl;
    }
    else if (number == 5)
    {
        cout << "Your number corresponds to a weekday (Friday)." << endl;
    }
    else if (number == 6)
    {
        cout << "Your number corresponds to a weekend day (Saturday)." << endl;
    }
    else if (number == 7)
    {
        cout << "Your number corresponds to a weekend day (Sunday)." << endl;
    }
    else
    {
        // Handle invalid input
        cout << "ERROR. Please enter a number between 1 and 7 only." << endl;
    }

    return 0;
}
