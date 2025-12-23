/*
CIS 1111

Name: Erik Larson
Date: 10/03/25
Program Name: Decisions Exercise 1
Program Description:
Allow the user to input data about a horse
and determine if it is healthy or not
*/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()

{

const int lightHorseMin = 840;
const int lightHorseMax = 1200;

const int largeHorseMin = 1110;
const int largeHorseMax = 1550;

const int draftHorseMin = 1500;
const int draftHorseMax = 2200;

const string errorMessage = "I am Error. Please try again.";
//This isn't a typo, just an obscure programming joke from the 80s.

int horseType, userHorse, horseWeight;

cout << "Welcome to Hector's Horse Healers." << endl;
cout << "Looking after your horse's health is important." << endl;
cout << endl << "1: Light Riding Horse";
cout << endl << "2: Large Riding Horse";
cout << endl << "3: Draft Horse" << endl << endl;
cout << "Please enter the type of horse you have: ";
cin >> horseType;
cout << endl;

if ((horseType != 1) && (horseType != 2) && (horseType != 3)){
cout << errorMessage << endl << endl; return 1;}

cout << "Please enter your horses weight in pounds: ";
cin >> horseWeight;
cout << endl << endl;

if ((horseWeight < 100) || (horseWeight > 9999)){
cout << errorMessage << endl << endl; return 1;}

else if (((horseType == 1) && (lightHorseMin <= horseWeight) && (horseWeight <= lightHorseMax))
|| ((horseType == 2) && (largeHorseMin <= horseWeight) && (horseWeight <= largeHorseMax))
||  ((horseType == 3) && (draftHorseMin <= horseWeight) && (horseWeight <= draftHorseMax))){
cout << "Congratulations, your horse is at a healthy weight." << endl << endl;}

else if (((horseType == 1) && (horseWeight < lightHorseMin))
|| ((horseType == 2) && (horseWeight < largeHorseMin))
||  ((horseType == 3) && (horseWeight < draftHorseMin))){
cout << "Unfortunately your horse is underweight, try feeding them more." << endl << endl;}

else if (((horseType == 1) && (horseWeight > lightHorseMax))
|| ((horseType == 2) && (horseWeight > largeHorseMax))
||  ((horseType == 3) && (horseWeight > draftHorseMax))){
cout << "Unfortunately your horse is overweight, try exercising them more." << endl << endl;}

else {
cout << errorMessage << endl << endl; return 1;}

}

/*
Here is some of the earlier code from various stages
that intuitively felt like it should work
but I guess not
so I had to figure something else out
which was a little annoying but oh well

//Initial constants
const int healthyLightHorse = (840 <= healthyLightHorse <= 1200);
const int healthyLargeHorse = (1110 <= healthyLargeHorse <= 1550);
const int healthyDraftHorse = (1500 <= healthyDraftHorse <= 2200);

//Initial formulas
int healthyLightHorse;
(lightHorseMin <= healthyLightHorse <= lightHorseMax);
int healthyLargeHorse;
(largeHorseMin <= healthyLargeHorse <= largeHorseMax);
int healthyDraftHorse;
(draftHorseMin <= healthyDraftHorse <= draftHorseMax);

if ((horseWeight < 100) || (horseWeight > 9999)){
cout << errorMessage; return 1;}

else if (((userHorse == 1) && horseWeight == healthyLightHorse)
|| ((userHorse == 2) && horseWeight == healthyLargeHorse)
||  ((userHorse == 3) && horseWeight == healthyDraftHorse)){
cout << "Congratulations, your horse is at a healthy weight.";}

else if (((userHorse == 1) && horseWeight < healthyLightHorse)
|| ((userHorse == 2) && horseWeight < healthyLargeHorse)
||  ((userHorse == 3) && horseWeight < healthyDraftHorse)){
cout << "Unfortunately your horse is underweight, try feeding them more.";}

else if (((userHorse == 1) && horseWeight > healthyLightHorse)
|| ((userHorse == 2) && horseWeight > healthyLargeHorse)
||  ((userHorse == 3) && horseWeight > healthyDraftHorse)){
cout << "Unfortunately your horse is overweight, try feeding them less.";}

else {
cout << errorMessage; return 1;}
*/