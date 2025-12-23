/*
CIS1111

Name: Erik Larson
Date: 12/07/25
Program Name: Ludowork Archive Creator
Program Description:
A program designed to let users view, add, and remove information
about their favorite ludoworks.
Ludoworks basically means video games,
but the term "video games" feels kind of crude and reductive,
like how films used to be called moving pictures.

This code went through a lot of revision and debugging
and I had to scale back some of ideas when I realized
they were too complicated or going into unknown territory
but I'm still fairly satisfied with how it turned out
I hope it's okay.
*/

#include<cmath>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Read from Archive File
void loadArchive(vector<int>& rank,
                 vector<string>& name, 
                 vector<int>& release, 
                 vector<string>& genre)
   {ifstream infile;
    infile.open("archive.txt");
    if (!infile) {
        return;
    }             
    int r, y;
    //rank, year
    string n, g;
    //name, genre
    while (infile >> r) {
    infile.ignore();
    getline(infile, n);
    infile >> y;
    infile.ignore();
    getline(infile, g);
    rank.push_back(r);
    name.push_back(n);
    release.push_back(y);
    genre.push_back(g);}

    infile.close();
}

//Write to Archive File
void saveArchive(vector<int>& rank,
                 vector<string>& name, 
                 vector<int>& release, 
                 vector<string>& genre)
   {ofstream outfile;
    outfile.open("archive.txt");
    for (int i = 0; i < rank.size(); i++) {
        outfile << rank[i] << endl;
        outfile << name[i] << endl;
        outfile << release[i] << endl;
        outfile << genre[i] << endl;}

    outfile.close();
}

//Display Main Menu to User
void startMenu() {
    cout << "Welcome to your personal Ludowork Archive. Please select one of the following options.";
    cout << endl << "1: View Archived List";
    cout << endl << "2: Add to Archived List";
    cout << endl << "3: Remove from Archived List";
    cout << endl << "9: Exit Archived List" << endl;
}

//Display View Decision to User
void viewListAmount() {
    cout << "Do you want to view the entire archived list?";
    cout << endl << "1: Yes";
    cout << endl << "2: No" << endl;
    }

//Display View Archived List Menu to User
void viewAmountSelection() {
    cout << "What would you like to view?";
    cout << endl << "1: A certain number of works.";
    cout << endl << "2. A certain genre of works.";
    cout << endl << "3. Works with a certain Release Year." << endl;
}

//Formula for the percentage of the archive that was viewed
int calculatePercentage(int viewed, int total) {
    if (total == 0) {
        exit(1);}
    return (viewed * 100) / total;
}

//Display the Categories at the beginning of the page
void displayCategories() {
    cout << endl;
    cout << left 
    << setw(8) << "Rank" 
    << setw(30) << "Name"
    << setw(15) << "Release Year" 
    << setw(20) << "Genre" << endl;
}

//Function for running through and printing the contents of the vectors to display the entries
void displayEntries(int number, vector<int>& rank, vector<string>& name, vector<int>& release, vector<string>& genre) {
    for (int i = 0; i < number; i++) {
        cout << left 
        << setw(8) << rank[i] 
        << setw(30) << name[i] 
        << setw(15) << release[i] 
        << setw(20) << genre[i] << endl;}
}

//Function for printing just one entry
void displayOneEntry(int i, vector<int>& rank, vector<string>& name, vector<int>& release, vector<string>& genre) {
        cout << left 
        << setw(8) << rank[i] 
        << setw(30) << name[i] 
        << setw(15) << release[i] 
        << setw(20) << genre[i] << endl;
}

//Display Remove Menu to User
void removeListMenu() {
        cout << "What do you want to remove?";
        cout << endl << "1: One specific work.";
        cout << endl << "2: Part of the archive.";
        cout << endl << "3: All of the archive." << endl;
}

//Error Message for if the program encounters a problem
void errorMessage() {
    cout << "I am Error." << endl;
}
//Exit Message for when the program is finished.
void exitMessage(vector<int>& rank,
                 vector<string>& name, 
                 vector<int>& release, 
                 vector<string>& genre) {
    saveArchive(rank, name, release, genre);
    cout << "Thank you for using this program. Goodbye." << endl << endl;
    exit(0);
}

int main() {

int userExitChoice = 0;

    vector<int> archiveRank;
    vector<string> archiveName;
    vector<int> archiveRelease;
    vector<string> archiveGenre;

    loadArchive(archiveRank, archiveName, archiveRelease, archiveGenre);
    
do {
    startMenu();
    //"Welcome, select option"
    //View, Add, Remove, Exit

    int userMainSelection;
    cin >> userMainSelection;
    if(userMainSelection == 1) {

        viewListAmount();
        //"How much of the list to view"
        //All of it, part of it
        int userAmountSelection;
        cin >> userAmountSelection;
        if (userAmountSelection == 1) {
            if (archiveRank.empty()) {
                cout << "The archive is empty." << endl;
                } else {
                displayCategories(); cout << endl;
                displayEntries(archiveRank.size(), archiveRank, archiveName, archiveRelease, archiveGenre);}
            } else if (userAmountSelection == 2){
                if (archiveRank.empty()) {
                cout << "The archive is empty." << endl;
                } else{
                viewAmountSelection();
                int viewAmountType;
                cin >> viewAmountType;
                if (viewAmountType == 1) {
                    int viewNumber = 0;
                    do {
                        cout << "Please enter the amount you would like to view: ";
                        cin >> viewNumber;
                        if ((!cin) || (viewNumber < 1) || (viewNumber > archiveRank.size())) {
                        errorMessage();
                        cin.clear();
                        cin.ignore(1000, '\n');}
                        } while ((!cin) || (viewNumber < 1) || (viewNumber > archiveRank.size()));
                    displayCategories();
                    displayEntries(viewNumber, archiveRank, archiveName, archiveRelease, archiveGenre);
                    cout << endl << "You viewed " << calculatePercentage(viewNumber, archiveRank.size()) << "% of the archive." << endl; 
            
                    } else if (viewAmountType == 2) {
                    string userGenre;
                    bool genreFound;

                    cin.ignore(1000, '\n');
                    do {
                        cout << "Please enter the genre you would like to view: ";
                        getline(cin, userGenre);
                        genreFound = false;

                        for (int i = 0; i <archiveGenre.size(); i++) {
                            if (archiveGenre[i] == userGenre) {
                            genreFound = true;}}
                        if (!genreFound) {
                        errorMessage();}
                        } while (!genreFound);

                    int viewGenre = 0;
                    displayCategories();
                    for (int i = 0; i < archiveGenre.size(); i++) {
                        if (archiveGenre[i] == userGenre) {
                            viewGenre++;
                            cout << left 
                            << setw(8) << archiveRank[i] 
                            << setw(30) << archiveName[i] 
                            << setw(15) << archiveRelease[i] 
                            << setw(20) << archiveGenre[i] << endl;
                          }
                        }
                    cout << endl << "You viewed " << calculatePercentage(viewGenre, archiveRank.size()) << "% of the archive." << endl;         
                    } else if (viewAmountType == 3) {
                    int userReleaseYear;
                    bool yearFound;
                    do {
                        cout << "Please enter the Release Year you would like to view: ";
                        cin >> userReleaseYear;
                        yearFound = false;

                        for (int i = 0; i < archiveRelease.size(); i++) {
                            if (archiveRelease[i] == userReleaseYear) {
                            yearFound = true;}
                            }
                        if (!yearFound) {
                        errorMessage();}
                        } while (!yearFound);

                int viewYear = 0;
                displayCategories();
                for (int i = 0; i < archiveRelease.size(); i++) {
                    if (archiveRelease[i] == userReleaseYear) {
                        viewYear++;
                        cout << left 
                        << setw(8) << archiveRank[i] 
                        << setw(30) << archiveName[i] 
                        << setw(15) << archiveRelease[i] 
                        << setw(20) << archiveGenre[i] << endl;}
                    }
                 cout << endl << "You viewed " << calculatePercentage(viewYear, archiveRank.size()) << "% of the archive." << endl; 
                } else {
                errorMessage();}
                }
            }
        } else if (userMainSelection == 2) {
            cin.ignore();
            string newName;
            int releaseYear;
            string workGenre;
            int newRanking;
            int addNewWork = 2;
            do {
                cout << "Please enter the name of the work you want to add: ";
                getline(cin, newName);
                do {
                    cout << "Please enter the release year of the work: ";
                    cin >> releaseYear;
                    if ((!cin) || (releaseYear < 1980) || (releaseYear > 2030)) {
                    errorMessage();}
                    cin.ignore(1000, '\n');
                    } while ((!cin) || (releaseYear < 1980) || (releaseYear > 2030));
                cout << "Please enter the genre of the work: ";
                getline(cin, workGenre);
                do {
                    cout << "Please enter the rank of the work: ";
                    cin >> newRanking;
                    if ((!cin) || (newRanking < 1 ) || (newRanking > 500)) {
                    errorMessage();}
                    } while ((!cin) || (newRanking < 1 ) || (newRanking > 500));
                int archiveIndex = newRanking - 1;
                int size = archiveRank.size();
                if (archiveIndex < 0) {
                    archiveIndex = 0;}
                if (archiveIndex > size) {
                    archiveIndex = size;}
                archiveRank.push_back(0);
                archiveName.push_back("");
                archiveRelease.push_back(0);
                archiveGenre.push_back("");
                for (int i = size; i > archiveIndex; i--) {
                    archiveRank[i] = archiveRank[i - 1];
                    archiveName[i] = archiveName[i - 1];
                    archiveRelease[i] = archiveRelease[i - 1];
                    archiveGenre[i] = archiveGenre[i - 1];}
                archiveRank[archiveIndex] = newRanking;
                archiveName[archiveIndex] = newName;
                archiveRelease[archiveIndex] = releaseYear;
                archiveGenre[archiveIndex] = workGenre;
                for (int i = 0; i < archiveRank.size(); i++) {
                    archiveRank[i] = i + 1;}
                cout << endl << "Your new ludowork has been added to the archive." << endl;
                displayCategories();
                displayOneEntry(archiveIndex, archiveRank, archiveName, archiveRelease, archiveGenre);
                saveArchive(archiveRank, archiveName, archiveRelease, archiveGenre);
                cout << endl << "Press 2 if you would like to enter another work: ";
                cin >> addNewWork;
                cin.ignore(1000, '\n');
                } while (addNewWork == 2);


        } else if (userMainSelection == 3) {
        removeListMenu();
        //What to remove
        //one work, partial or full erasure
        int userRemoveSelection;
        cin >> userRemoveSelection;
        if (userRemoveSelection == 1) {
            int workToRemove;
            do {
                cout << "Please enter the rank of the work you would like to remove: ";
                cin >> workToRemove;
                if ((!cin) || (workToRemove < 1) || (workToRemove > archiveRank.size())) {
                errorMessage();}
                } while ((!cin) || (workToRemove < 1) || (workToRemove > archiveRank.size()));

            int removalIndex = workToRemove - 1;
               
            displayCategories();
            displayOneEntry(removalIndex, archiveRank, archiveName, archiveRelease, archiveGenre);
            int userRemoval = 0;
            do {
                cout << endl << "Are you sure you want to delete this entry?" << endl;
                cout << "1: Yes" << endl << "2: No" << endl;
                cin >> userRemoval;
                } while ((userRemoval != 1) && (userRemoval != 2));
            if (userRemoval == 1) {
                for (int i = removalIndex; i < (archiveRank.size() - 1); i++) {
                    archiveRank[i] = archiveRank[i + 1];
                    archiveName[i] = archiveName[i + 1];
                    archiveRelease[i] = archiveRelease[i + 1];
                    archiveGenre[i] = archiveGenre[i + 1];}
                archiveRank.pop_back();
                archiveName.pop_back();
                archiveRelease.pop_back();
                archiveGenre.pop_back();
                for (int i = 0; i < archiveRank.size(); i++) {
                    archiveRank[i] = i + 1;}
                    cout << "Entry removed. Archive updated." << endl;} 
            } else if (userRemoveSelection == 2) {
            int numToRemove;
            int totalEntries = archiveRank.size();
            cout << "There are " << totalEntries << " works in the archive." << endl;
            do {
                cout << "How many would you like to remove from the bottom? " << endl;
                cin >> numToRemove;
                if (!cin || numToRemove < 1 || numToRemove > totalEntries) {
                errorMessage();}
                } while (!cin || numToRemove < 1 || numToRemove > totalEntries);
            for (int i = 0; i < numToRemove; i++) {
                archiveRank.pop_back();
                archiveName.pop_back();
                archiveRelease.pop_back();
                archiveGenre.pop_back();}
            cout << endl << numToRemove;
            cout << " works have been removed from the archive." << endl;
            } else if (userRemoveSelection == 3) {
            int totalRemove;
            do {
                cout << "Are you sure you want to delete everything in the archive?";
                cout << endl << "1: Yes" << endl << "2: No" << endl;
                cin >> totalRemove;
                if ((totalRemove != 1) && (totalRemove != 2)) {
                errorMessage();}
                } while ((totalRemove != 1) && (totalRemove != 2));
            if (totalRemove == 1) {
                archiveRank.clear();
                archiveName.clear();
                archiveRelease.clear();
                archiveGenre.clear();
                cout << "Confirmed. The archive is now empty." << endl;}
            }
        saveArchive(archiveRank, archiveName, archiveRelease, archiveGenre);
        } else if (userMainSelection == 9) {
        exitMessage(archiveRank, archiveName, archiveRelease, archiveGenre);
        } else {
        errorMessage();}
        cout << endl << "Return to Main Menu?" << endl;
        cout << "1: Yes" << endl << "2: No" << endl;
        cin >> userExitChoice;
        if (userExitChoice == 1) {
            int placebo = 0;}
    } while (userExitChoice != 2);

exitMessage(archiveRank, archiveName, archiveRelease, archiveGenre);
}