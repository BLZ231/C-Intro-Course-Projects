/*
CIS1111

Name: Erik Larson
Date: 10/11/25
Program Name: Relational Operators
Program Description:
Set up a series of prizes
where if they user guess the correct price
within a certain margin for error
then they get that prize
otherwise they get nothing
*/

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {

const string prize1 = "Portable Power Bank";
const string prize2 = "Health and Environment Smartwatch Scanner";
const string prize3 = "Enhanced E-Scooter";
const string prize4 = "All Expenses Paid Luxury Trip To Belize";

const int prize1Price = 75;
const int prize2Price = 430;
const int prize3Price = 550;
const int prize4Price = 1725;

int prizeNumber, prizePriceGuess, correctPrice, minCorrectPrice, maxCorrectPrice;
string chosenPrize;

string errorMessage = "I am Error. Please try again.";

cout << "Welcome to Survival of the Eh Good Enough! Below are our incredible prizes!" << endl << endl;
//Survival of the Eh Good Enough is a pretty accurate description of evolution.
//Some animals are marvels, some are Koalas.
cout << "1: " << prize1 << endl;
cout << "2: " << prize2 << endl;
cout << "3: " << prize3 << endl;
cout << "4: " << prize4 << endl << endl;

cout << "Please enter the number of the prize whose price you want to guess: ";
cin >> prizeNumber;
cout << endl;

if (prizeNumber == 1){
chosenPrize = prize1;}
else if (prizeNumber == 2){
chosenPrize = prize2;}
else if (prizeNumber == 3){
chosenPrize = prize3;}
else if (prizeNumber == 4){
chosenPrize = prize4;}
else {cout << endl << endl << errorMessage << endl << endl;
return 1;}

cout << "Please enter your guess for the price of the " << chosenPrize << ": ";
cin >> prizePriceGuess;
cout << endl;

if (chosenPrize == prize1){
correctPrice = prize1Price;}
else if (chosenPrize == prize2){
correctPrice = prize2Price;}
else if (chosenPrize == prize3){
correctPrice = prize3Price;}
else if (chosenPrize == prize4){
correctPrice = prize4Price;}
else {cout << endl << endl << errorMessage << endl << endl;
return 1;}

if (correctPrice == prize1Price){
minCorrectPrice = ((prize1Price) - (prize1Price*.12));
maxCorrectPrice = ((prize1Price) + (prize1Price*.12));}
else if (correctPrice == prize2Price){
minCorrectPrice = ((prize2Price) - (prize2Price*.1));
maxCorrectPrice = ((prize2Price) + (prize2Price*.1));}
else if (correctPrice == prize3Price){
minCorrectPrice = ((prize3Price) - (prize3Price*.05));
maxCorrectPrice = ((prize3Price) + (prize3Price*.05));}
else {minCorrectPrice = correctPrice; maxCorrectPrice = correctPrice;}
//definitely glad I tested all four prizes

if (prizePriceGuess == correctPrice){
cout << "Congratulations, your guess was exactly right! You win!";
cout << endl << endl;}
else if ((minCorrectPrice <= prizePriceGuess) && (prizePriceGuess <= maxCorrectPrice)){
cout << "Congratulations, your guess was close enough! You win!";
cout << endl << endl;}
else {cout << "I'm sorry, your guess was wrong. The actual price is " 
<< correctPrice << "." << endl << endl;}

return 0;
//Sheesh, it gets huffy about the pettiest things.
//I mean I know precision is important but still.

}

/*
Process

So I started by looking at the sample output and trying to figure out
in general what each component of the output was, where it would
come from, and how it would relate to the other components.
I put together a rough pseudocode that showed the overall structure.
I then worked on translating it piece by piece into C++ syntax
which also involved me having to figure out what formulas
to use, and importantly where to put them. I then uncommented the
more fleshed out pseudo-code and worked on correcting a bunch of
the syntax errors that popped up, some of which I had seen coming
but others were a surprise, and in some cases it felt overly picky.
I find it a bit ironic that most of my formulas worked correctly
right out of the gate, except for the most important one
because C++ doesn't like (X < Y < Z), it has to be
(X < Y)&&(Y < Z) which is really annoying, but just a part of the
language. There were a few other minor issues that popped up
but they were pretty simple to fix. Overall it wasn't difficult
but did end up being more time consuming than expected.
*/