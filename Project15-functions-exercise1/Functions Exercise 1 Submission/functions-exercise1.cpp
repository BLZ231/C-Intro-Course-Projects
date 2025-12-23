/*
CIS1111

Name: Erik Larson
Date: 11/08/25
Program Name: Functions Exercise 1
Program Description:
Ask a user to enter two numbers and a calculation
and then display the result.
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

double add(double a, double b);
double sub(double a, double b);
double mul(double a, double b);
double div(double a, double b);

int main() {

double userFirstNum, userSecondNum;

cout << "Please enter your first number: ";
cin >> userFirstNum; cout << endl;
cout << "Please enter your second number: ";
cin >> userSecondNum; cout << endl << endl;

cout << "Calculation Options: " << endl;
cout << "Input 1 to Add" << endl;
cout << "Input 2 to Subtract" << endl;
cout << "Input 3 to Multiply" << endl;
cout << "Input 4 to Divide" << endl;

int userCalcInput;
string userCalcChoice;
double userCalcResult;
char operation;

cout << endl << "Please input your calculation: ";
cin >> userCalcInput; cout << endl << endl;

switch(userCalcInput) {
    case 1: userCalcChoice = "sum";
    userCalcResult = add(userFirstNum, userSecondNum);
    break;
    case 2: userCalcChoice = "difference";
    userCalcResult = sub(userFirstNum, userSecondNum);
    break;
    case 3: userCalcChoice = "product";
    userCalcResult = mul(userFirstNum, userSecondNum);
    break;
    case 4: userCalcChoice = "quotient";
    userCalcResult = div(userFirstNum, userSecondNum);
    break;
    default: cout << "I am Error." << endl;
    return 1;
}

cout << "The " << userCalcChoice << " of your numbers is: ";
cout << userCalcResult << endl << endl;

}

double add(double a, double b) {
    return (a + b);
}
double sub(double a, double b) {
    return (a - b);
}
double mul(double a, double b) {
    return (a * b);
}
double div(double a, double b) {
    if (b == 0) {
    return 0;
    }
    return (a / b);
}