/*
CIS1111

Name: Erik Larson
Date: 11/21/25
Program Name: Arrays Exercise 1
Program Description:
Print out an array, then print out a second array
that changes all the odd numbers in the first array
to even numbers.
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

//int evenArray(); vestigial

int main() {

    //Definitions
    int originalArray[] = {42, 9, 23, 101, 99, 22, 13, 5, 77, 28};
    int arraySize = 10;
    int originalNum = 0;
    int evenNum = 0;

    //Original array output
    cout << "The original array is: " << endl;
    for (int i = 0; i < arraySize; i++) {
        originalNum = originalArray[i];
        cout << originalNum << "   ";
        }
    cout << endl << endl << "The even array is: " << endl;

    //Even array output
    for (int j = 0; j < arraySize; j++) {
        originalNum = originalArray[j];
        if (originalNum % 2 != 0) {
            evenNum = originalNum + 1;
        } else {
            evenNum = originalNum;
        }
        cout << evenNum << "   ";    
        }
    cout << endl << endl;

    return 0;
}