/*
CIS1111

Name: Erik Larson
Date: 10/03/25
Program Name: Decisions Exercise 2
Program Description:
Ask the user for an even number
If the number is even they get a postitive response
If the number is odd they get a negative response
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()

{

int userNum;

cout << "Please enter an even number: ";
cin >> userNum;
cout << endl << endl;

if (((userNum % 2) == 0)) {
    cout << "The number " << userNum << " is even. ";
    cout << "Thank you for correct input." << endl << endl;
} else if ((userNum % 2) == 1) {
    cout << "The number " << userNum << " is odd. ";
    cout << "This input is incorrect." << endl << endl;
} else {
    cout << "Insert Error Message Here." << endl << endl;}

}