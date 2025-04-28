#include <iostream> 
#include <cmath>    // Includes the cmath library for the absolute value function
using namespace std;

// REQUESTS TWO NUMBERS AND SHOWS WHICH IS CLOSER TO 100

int main()
{
    // Declare the variables 
    int Number1, Number2;
    
    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> Number1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> Number2;

    // Calculate the absolute differences between the numbers and 100
    int diff1 = abs(Number1 - 100); // Absolute difference between number 1 and 100
    int diff2 = abs(Number2 - 100); // Absolute difference between number 2 and 100
    
    // Compare the differences and display which number is closer to 100
    if (diff1 < diff2) {
        cout << "The first number " << Number1 << " is closer to 100" << endl;
    }
    else if (diff2 < diff1) {
        cout << "The second number " << Number2 << " is closer to 100" << endl;
    }
    else {
        cout << "Both numbers are equally close to 100" << endl;
    }

    return 0; 
}