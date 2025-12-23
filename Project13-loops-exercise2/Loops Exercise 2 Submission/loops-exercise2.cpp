/*
CIS1111

Name: Erik Larson
Date: 10/26/25
Program Name: Loops Exercise 2
Program Description:
Ask the user to input a number
Then display that number's multiplication table
*/

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {

int i, userNumber, result;

cout << "Enter a number of your choice: ";
cin >> userNumber;
cout << endl;
cout << "Your number is: " << userNumber;
cout << endl << endl;
cout << "Below is the multiplication table for ";
cout << userNumber << ": " << endl << endl;

for (i = 1; i < 13; i++){
    result = i * userNumber;
    cout << userNumber << " X " << i << " = " << result << endl;
}

cout << endl;

return 0;
}