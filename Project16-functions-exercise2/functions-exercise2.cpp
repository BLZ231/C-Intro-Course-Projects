/*
CIS1111

Name: Erik Larson
Date: 11/09/25
Program Name: Functions Exercise 2
Program Description:
Allow the user to make several selections
and then calculate and display the total cost
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

void displayMenu();
void displayBill(double a, double b);

int main() {

    const double priceOne = 5.75;
    const double priceTwo = 4.00;
    const double priceThree = 5.50;
    const double priceFour = 2.50;
    const double priceFive = 4.75;
    const double priceSix = 3.50;
    const double tipRate = 0.20;

    double userTotal = 0.00;
    int userPick = 0;

    while (userPick != 7) {
        displayMenu();
        int userAmount = 0;

        cout << "Please input your selection: ";
        cin >> userPick;

        if (userPick == 7) {
            break;
        }

        cout << "Please input your desired amount: ";
        cin >> userAmount; cout << endl;

        if (userPick == 1) {
            userTotal += (userAmount * priceOne);
            } else if (userPick == 2) {
            userTotal += (userAmount * priceTwo);
            } else if (userPick == 3) {
            userTotal += (userAmount * priceThree);
            } else if (userPick == 4) {
            userTotal += (userAmount * priceFour);
            } else if (userPick == 5) {
            userTotal += (userAmount * priceFive);
            } else if (userPick == 6) {
            userTotal += (userAmount * priceSix);
            } else { cout << "I am Error.";
            return 1;
            }
        }

    displayBill(userTotal, tipRate);

}

void displayMenu() {

    cout << fixed << setprecision(2);

    cout << left << setw(20) << "Eden's Eggy Menu: " << endl << endl;
    cout << left << setw(20) << "1: Omelette " << right << setw(20) << "$5.75" << endl;
    cout << left << setw(20) << "2: Scrambled Eggs " << right << setw(20) << "$4.00" << endl;
    cout << left << setw(20) << "3: Egg rolls " << right << setw(20) << "$5.50" << endl;
    cout << left << setw(20) << "4: Egg salad " << right << setw(20) << "$2.50" << endl;
    cout << left << setw(20) << "5: Deviled Eggs " << right << setw(20) << "$4.75" << endl;
    cout << left << setw(20) << "6: Hardboiled Eggs " << right << setw(20) << "$3.50" << endl;
    cout << left << setw(20) << "7: Cash Out" << endl << endl;
}

void displayBill(double userTotal, double tipRate) {

    double tipAmount = (userTotal * tipRate);
    double finalAmount = (userTotal + tipAmount);

    cout << left << setw(20) << "Thank you for your order." << endl << endl;
    cout << left << setw(20) << "Total Bill" << endl;
    cout << left << setw(20) << "Subtotal: " << right << setw(10) << "$" << setw(8) << userTotal << endl;
    cout << left << setw(20) << "Tip: " << right << setw(10) << "$" << setw(8) << tipAmount << endl;
    cout << left << setw(20) << "Final Bill: " << right << setw(10) << "$" << setw(8) << finalAmount << endl << endl;
}