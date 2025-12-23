//variables exercise 2
//CIS 1111
//Name: Erik Larson
//Date: 09/06/25
//Program Name: Declaring Variables Part 2
//Description: The Program is designed to
//display information about my classes
//using variables

#include <iostream>
#include <string>

using namespace std;

int main()

{
    string termName = "Fall 12025";
    //the 1 isn't a typo, I personally just feel that the
    //Holocene calendar makes more sense. Obviously I
    //can't use it in very many places though

    string class1Name = "CIS 1111";
    string class2Name = "CIS 1140";
    string class3Name = "CIS 1107";

    int classCredits1 = 1;
    int classCredits2 = 2;
    int classCredits3 = 3;
    int classCredits4 = 4;
    int classCredits5 = 5;
    int classCredits6 = 6;
    
    cout << termName << " Class Schedule" << endl;
    cout << "" << endl;
    cout << "This term, " << termName << ", I am taking " << class3Name << ", which is " << classCredits3 << " credit hours." << endl;
    cout << "" << endl;
    cout << "This term, " << termName << ", I am taking " << class1Name << ", which is " << classCredits3 << " credit hours." << endl;
    cout << "" << endl;
    cout << "This term, " << termName << ", I am taking " << class2Name << ", which is " << classCredits3 << " credit hours." << endl;
    cout << "" << endl;

    return 0;}