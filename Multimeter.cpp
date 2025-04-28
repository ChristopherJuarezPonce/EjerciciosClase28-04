#include <iostream>

using namespace std;


int main()
{
    int vehicleType, speed;

    // Display welcome message and prompt for vehicle type
    cout << "Welcome to the Vehicle Fine System (VFS)" << endl;
    cout << "Please enter the type of vehicle you drive:" << endl;
    cout << "Motorcycle (Enter 1)" << endl;
    cout << "Kia Soul (Enter 2)" << endl;
    cout << "Tuned R44 (Enter 3)" << endl;

    cin >> vehicleType;

    if (vehicleType == 1)
    { // Motorcycle
        cout << "At what speed were you traveling?" << endl;
        cin >> speed;

        if (speed < 60)
        {
            cout << "You have no fine." << endl;
        }
        else if (speed >= 60 && speed <= 80)
        {
            cout << "Your fine is $100." << endl;
        }
        else
        {
            cout << "Your fine is $1000." << endl;
        }
    }
    else if (vehicleType == 2)
    { // Kia Soul
        cout << "At what speed were you traveling?" << endl;
        cin >> speed;

        if (speed < 70)
        {
            cout << "You have no fine." << endl;
        }
        else if (speed >= 70 && speed <= 90)
        {
            cout << "Your fine is $200." << endl;
        }
        else
        {
            cout << "Your fine is $1111." << endl;
        }
    }
    else if (vehicleType == 3)
    { // Tuned R44
        cout << "At what speed were you traveling?" << endl;
        cin >> speed;

        if (speed < 80)
        {
            cout << "You have no fine." << endl;
        }
        else if (speed >= 80 && speed <= 100)
        {
            cout << "Your fine is $1500." << endl;
        }
        else
        {
            cout << "Your fine is $30000." << endl;
        }
    }
    else
    { // Invalid vehicle type
        cout << "You do not qualify for the Vehicle Fine System." << endl;
    }

    return 0;
}
