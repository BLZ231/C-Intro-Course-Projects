/*
CIS1111

Name: Erik Larson
Date: 11/01/25
Program Name: Files Assignment
Program Description:
Let the user find key words they input
and search for in a text file
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main() {

ofstream reportFile("reportfile.txt");
if (!reportFile) {
    cout << "I am Error";
    return 1;
    }

string oneKeyWord, twoKeyWord;

cout << "Input the first keyword to search for: ";
cin >> oneKeyWord;
cout << "Input the second keyword to search for: ";
cin >> twoKeyWord;

reportFile << "Input the first keyword to search for: " << oneKeyWord << endl;
reportFile << "Input the second keyword to search for: " << twoKeyWord << endl;

ifstream textFile("textfile.txt");
if (!textFile) {
    cout << "I am Error";
    return 1;
    }

string word;
int oneCount = 0;
int twoCount = 0;

while (textFile >> word) {
    if (word == oneKeyWord) {
        oneCount++;
        }
    if (word == twoKeyWord) {
        twoCount++;
        }
    }

cout << endl << "The input \"" << oneKeyWord;
cout << "\" was found " << oneCount << " times and the input \"";
cout << twoKeyWord << "\" was found " << twoCount;
cout << " times." << endl << endl;

reportFile << endl << "The input \"" << oneKeyWord;
reportFile << "\" was found " << oneCount << " times and the input \"";
reportFile << twoKeyWord << "\" was found " << twoCount;
reportFile << " times." << endl << endl;

textFile.close();
reportFile.close();
return 0;
}

/*
Process

I started by simply writing out the sample output that would be displayed to the console.
I then worked backwards to write code that would accept user input and then read the text file.
I then copied the text we were provided and created the text file
so that the code would be pointed at something.
I then almost submitted things
but after rereading the directions to make sure I hadn't missed anything
I discovered that I had forgotten about the output file.
So I added those parts and checked to make sure they were working.
*/