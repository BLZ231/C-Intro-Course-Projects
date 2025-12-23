/*
CIS1111

Name: Erik Larson
Date: 10/26/25
Program Name: Loops Exercise 1
Program Description:
Ask the user to enter a number between 1 and 10
Then validate if it is and respond accordingly
*/

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {

int userNumber = 0;

cout << "Please enter a number from 1 and 10: ";
cin >> userNumber;

while ((userNumber < 1) || (userNumber > 10)){
    cout << endl << endl;
    cout << "Your number is not from 1 to 10. Please try again: ";
    cin >> userNumber;
}

cout << endl;
cout << "Valid input received. Thank you.";
cout << endl << endl;

return 0;
}