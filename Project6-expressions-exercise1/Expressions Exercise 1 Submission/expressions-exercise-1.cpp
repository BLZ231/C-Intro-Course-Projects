/*
Expressions Exercise 1
CIS1111

Name: Erik Larson
Date: 09/21/25
Program Name: Expressions Part 1
Program Description:
Display different ticket prices
and bill totals
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{

const double adultTicketPrice = 319.99;
const double childTicketPrice = 134.99;
const double studentTicketPrice = 219.99;
const float taxRate = 0.066;

double adultNumber, childNumber, studentNumber;
int numberOfGuides;
double adultCost, childCost, studentCost, subTotal, finalTotal, taxAmount ;


string groupLeader;

cout << fixed << setprecision(2);
cout << "Welcome to Restored Eden Sanctuary!" << endl << endl ;
cout << "Ticket Prices:" << endl << endl ;
cout << left << setw(10) << "Adult " << right << setw(10) << "$" << adultTicketPrice << endl ;
cout << left << setw(10) << "Child " << right << setw(10) << "$" << childTicketPrice << endl;
cout << left << setw(10) << "Student " << right << setw(10) << "$" << studentTicketPrice << endl << endl ;

cout << "How many adult tickets does your group need? ";
cin >> adultNumber; cout << endl << endl;
cout << "How many child tickets does your group need? ";
cin >> childNumber; cout << endl << endl;
cout << "How many student tickets does your group need? ";
cin >> studentNumber; cout << endl << endl;

numberOfGuides = ceil((adultNumber + childNumber + studentNumber)/3) ;

cout << "What is the full name of your group leader? ";
cin.ignore();
getline(cin, groupLeader); cout << endl << endl;
cout << "Thank you, " << groupLeader << "." << endl << endl;
cout << "Your group will have " << numberOfGuides;
cout << " tour guides." << endl << endl;

adultCost = adultTicketPrice * adultNumber;
childCost = childTicketPrice * childNumber;
studentCost = studentTicketPrice * studentNumber;

subTotal = adultCost + childCost + studentCost ;
taxAmount = subTotal * taxRate ;

finalTotal = subTotal + taxAmount ;

cout << fixed << setprecision(2);
cout << "Billing Statement:" << endl << endl;
cout << left << setw(20) << "Adult Tickets:" << right << setw(20) << "$" << adultCost << endl;
cout << left << setw(20) << "Child Tickets:" << right << setw(20) << "$" << childCost << endl;
cout << left << setw(20) << "Student Tickets:" << right << setw(20) << "$" << studentCost << endl;
cout << left << setw(20) << "Subtotal:" << right << setw(20) << "$" << subTotal << endl;
cout << left << setw(20) << "Taxes:" << right << setw(20) << "$" << taxAmount << endl << endl;
cout << left << setw(20) << "Final Total:" << right << setw(20) << "$" << finalTotal << endl << endl;

return 0;
//once again it worked fine regardless of whether return 0 was present or not

}

/*
Pseudo-code

Output

Welcome to Restored Eden Sanctuary!

Ticket Prices:
Adult $319.99
Child $134.99
Student $219.99

How many adult tickets does your group need?

How many child tickets does your group need?

How many student tickets does your group need?

What is the full name of your group leader?

Thank you, [group leader]. 
Your group will have [x] tour guides through our sanctuary

Billing Statement

Adult Tickets:      [x]
Child Tickets:      [x]
Student Tickets:    [x]
Subtotal:           [x]
Taxes:              [x]

Final Total:        [x]

Code Draft

Constants (doubles probably)

adultTicketPrice
childTicketPrice
studentTicketPrice

numberOfGuides
is Inputs A B C added together
then divided by 3, then rounded up


Output: Welcome thing plus ticket prices

Output: adult tickets question
InputA: number of tickets, integer, blank space not an issue

Output: child tickets question
InputB: number of tickets, integer, blank space not an issue

Output: student tickets question
InputC: number of tickets, integer, blank space not an issue

Output: group leader question
InputD: Name, blank space is an issue

Output: Thanks [InputD]
Output: tour group [numberOfGuides]

Output: Bill Stuff

adultTicketsCost
is inputA times the price

childTicketsCost
is inputB times the price

studentTicketsCost
is inputC times the price

ticketSubTotal
is all three prices added together

taxAmount
is the sub total times tax rate
maybe 0.066?

finalTotal
is subtotal plus taxes
*/