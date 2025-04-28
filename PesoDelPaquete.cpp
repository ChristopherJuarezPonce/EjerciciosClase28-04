#include <iostream> 
using namespace std;

int main()
{
    // Declare the variable to store the weight of the package
    int PackageWeight;
    
    // Ask the user to input the weight of their package in KG
    cout << "Enter the weight of your package in KG: ";
    
    // Store the user's input in the variable 'PesoPaquete'
    cin >> PackageWeight;
    
    // Check if the weight is between 0 and 5 kg (inclusive)
    if(PackageWeight >= 0 && PackageWeight <= 5){
        // Display $5 if the weight is within the 0–5 kg range
        cout << "The cost of your package is $5" << endl;
    }
    // Check if the weight is between 6 and 10 kg (inclusive)
    else if (PackageWeight >= 6 && PackageWeight <= 10){
        // Display $10 if the weight is within the 6–10 kg range
        cout << "The cost of your package is $10" << endl;
    }
    // For weights greater than 10 kg
    else {
        // Display $15 for packages over 10 kg
        cout << "The cost of your package is $15" << endl;
    }
    
    return 0; 
}