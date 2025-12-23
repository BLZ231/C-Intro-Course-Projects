/*
Expression Exercise 2
CIS1111

Name: Erik Larson
Date: 09/21/25
Program Name: Expressions Part 1
Program Description:
It looks like second verse same as the first
though this time it's about computers
instead of theme park tickets
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{

//constants
const double perComputer = 50.00;
const double perFirewall = 125.00;
const double baseConsult = 200.00;

//declared Variables
string companyTitle;
double networkComputers, computerFee, firewallFee, totalAmount;

//output
cout << fixed << setprecision(2);
cout << "Welcome to Rapture Technologies." << endl << endl;
cout << "Here is how our pricing works:" << endl << endl;
cout << left << setw(25) << "Per Computer: " << right << setw(25) << perComputer << endl;
cout << left << setw(25) << "Per Firewall Device: " << right << setw(25) << perFirewall << endl;
cout << left << setw(25) << "Base Consultation Fee: " << right << setw(25) << baseConsult << endl << endl;

//input
cout << "Please enter the full title of your company: ";
getline(cin, companyTitle); cout << endl << endl;
cout << "Please enter the number of computers on your network: ";
cin >> networkComputers;
cout << endl << endl;

//formulas
int perDevice = static_cast<int>(ceil(networkComputers / 6.0));
computerFee = perComputer * networkComputers;
firewallFee = perFirewall * perDevice;
totalAmount = computerFee + firewallFee + baseConsult;

//estimate
cout << "Thank you. Your estimate for " << companyTitle;
cout << " is complete." << endl << endl;

cout << left << setw(25) << "Computer Fee: " << right << setw(25) << computerFee << endl;
cout << left << setw(25) << "Firewall Fee: " << right << setw(25) << firewallFee << endl;
cout << left << setw(25) << "Consultation Fee: " << right << setw(25) << baseConsult << endl << endl;
cout << left << setw(25) << "Total Amount: " << right << setw(25) << totalAmount << endl << endl;

}

/*
No remaining pseudo-code this time
because the first exercise gave me a good idea for how this one should work
the specifics are different but the broad strokes are very similar
so I ended up writing my pseudo-code within the {}
and structured it so that it was simple to translate to actual code
in fact most of it was just regular code to begin with
but hidden inside the safety of the comment markers
so I could write my code in peace
without the software constantly flashing red error alerts
every time I change something, which got annoying
because me not being finished writing something
is not the same thing as an error
Sorry, this was probably overly long
*/

