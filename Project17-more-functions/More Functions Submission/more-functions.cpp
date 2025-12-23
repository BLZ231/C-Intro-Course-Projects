/*
CIS1111

Name: Erik Larson
Date: 11/16/25
Program Name: More Functions
Program Description:
Prompt the user to provide the known length of two sides of a triangle
and then use that to calculate the max length of the third side
and the hypotenuse.
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

void triFormulas(double a, double b, double &c, double &d);

int main() {

double userSideOne, userSideTwo;
double maxLength, triHyp;

cout << "Please enter the first known side of the triangle: ";
cin >> userSideOne;
cout << "Please enter the second known side of the triangle: ";
cin >> userSideTwo;
triFormulas(userSideOne, userSideTwo, maxLength, triHyp);
cout << "The maximum length of the third side is: " << maxLength << endl;
cout << fixed << setprecision(2) << "The triangle's hypotenuse is " << triHyp << endl << endl;

return 0;
}

void triFormulas(double a, double b, double &maxLength, double &triHyp) {
    maxLength = a + b - 1;
    triHyp = sqrt((a*a) + (b*b));
}

/*
Process

So I started by writing out the cout statements that would be needed for the output, and then tried to
figure out from there how to write code that would retrieve the necessary information.
Since the formulas were provided it wasn't too hard to come up with a prototype and mostly correct
function, but figuring out exactly how to make the int main and void functions talk to each other
properly took a bit of trial and error and refreshing my memory on some concepts. It helped me
by showing me in a practical way how & can be useful, though it also showed me that there are still
some things I need to work on, like discerning whether having a function be double or void is correct.
*/