// This program calculates of much miles per gallon a vehicle gets

#include <iostream> // Must include to use cout
using namespace std;

int main()
{
    // Define variables and assign values
    double gallons = 20.0; // Gas tank capactiy in gallons
    double miles = 400.0;

    double milesPerGallon = 0.0;
    milesPerGallon = miles / gallons;

    // Results
    cout << "The car drove " << miles << " miles on "
         << gallons << " gallons of gas.\n"
         << "It got " << milesPerGallon << " miles per gallon.\n\n";
    system("pause");
    return 0;
}

/*
Output:
The car drove 400 miles on 20 gallons of gas.
It got 20 miles per gallon.
*/