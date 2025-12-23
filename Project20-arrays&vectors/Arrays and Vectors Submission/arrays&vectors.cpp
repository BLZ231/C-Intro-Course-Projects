/*
CIS1111

Name: Erik Larson
Date: 11/29/25
Program Name: 2D Arrays and Vectors Assignment
Program Description:
Analyze the data provided from a table
where a new runner recorded daily numbers
*/

#include<cmath>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void breakDays(const double data[][2], int rows);

int main() {

    const int daysRun = 28;
    const string weekDays[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    double runData[daysRun][2] = {
         {1, 0.89},
         {2, 0.76},
         {3, 0.79},
         {4, 0.00},
         {5, 0.96},
         {6, 0.63},
         {7, 0.19},
         {8, 1.01},
         {9, 0.99},
        {10, 0.81},
        {11, 0.89},
        {12, 0.73},
        {13, 0.00},
        {14, 0.45},
        {15, 0.96},
        {16, 1.12},
        {17, 0.00},
        {18, 1.01},
        {19, 1.20},
        {20, 0.68},
        {21, 1.79},
        {22, 1.25},
        {23, 1.08},
        {24, 1.12},
        {25, 1.29},
        {26, 0.81},
        {27, 1.09},
        {28, 1.09}
    };

    double totalMilesRun = 0.0;
    double longestRun = 0.0;
    double averageRun;

    for (int i = 0; i < daysRun; i++) {
        double miles = runData[i][1];
        totalMilesRun += miles;

        if (miles > longestRun) {
            longestRun = miles;
        }
    }

    averageRun = totalMilesRun / daysRun;

    cout << fixed << setprecision(2);
    cout << "The total miles run this month is: " << totalMilesRun <<  " miles." << endl;
    cout << "The average daily run is: " << averageRun << " miles." << endl;
    cout << "The longest run is " << longestRun << " miles." << endl;
    breakDays(runData, daysRun);
    cout << endl;
}

void breakDays(const double data[][2], int rows) {
    
    vector<int> days;

    for (int i = 0; i < rows; i++) {
        if (data[i][1] == 0.0) {
            days.push_back(data[i][0]);
        }
    }

    cout << "The break dates were: ";
    for (int i = 0; i < days.size(); i++) {
        cout << days[i] << " ";
    }
    cout << endl;
}

/*
Process

I started by declaring the data in the main array
and trying to make sure that all of the numbers were correct.
From there I tried to come up with the necessary formulas
which ended up being harder than I anticipated since they
were slightly different than I expected.
The thing that tripped me up the most was how
arrays are declared in human language
but later called in machine language.
It confused me because it feels like it should have
picked one and stuck with it.
Though after looking into it I guess this is a
somewhat common complaint with C and C++
for newcomers and even some veterans.
With arrays and vectors I'm once again having
the odd feeling of both understanding and not understanding
at the same time. I understand the underlying syntax logic,
but the way the logic is expressed is still confusing sometimes.
*/