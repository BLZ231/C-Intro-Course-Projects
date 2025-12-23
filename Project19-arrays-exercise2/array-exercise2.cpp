/*
CIS1111

Name: Erik Larson
Date: 11/21/25
Program Name: Arrays Exercise 2
Program Description:
Ask the user for values for an array
then print the original array values
and then print another array that is
the original values multiplied by
their index number.
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

void multiplyByIndex(int[], int[], int);

int main() {
    int userValue;
    int originalArray[10];
    int resultArray[10];

    for (int i = 0; i < 10; i++) {
        cout << "Please enter value " << i + 1 << ": ";
        cin >> userValue;
        originalArray[i] = userValue;
        }
    cout << endl << endl << "Original array values: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << originalArray[i] << "   ";
        }

    multiplyByIndex(originalArray, resultArray, 10);
    return 0;
    }

void multiplyByIndex(int originalArray[], int resultArray[], int size) {
    for (int i = 0; i < size; i++) {
        resultArray[i] = (originalArray[i] * i);
        }
    cout << endl << endl << "Index multiplied array values: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << resultArray[i] << "   ";
        }
    cout << endl << endl;
    }