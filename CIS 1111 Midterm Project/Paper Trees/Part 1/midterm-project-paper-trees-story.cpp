//CIS1111 Midterm Project
//Name: Erik Larson
//Halloween Ludowork: Paper Trees

#include<cmath>
#include<iomanip>
#include<iostream>
#include<string>
using namespace std;

int main() {

const string errorMessage = "Invalid input, please try again.";
const string errorEnding = "Ending 0: I Am Error";
//I wanted to give users a chance to try again if their input was invalid
//but only once for each choice

char storyPoint;
int storyInputA, storyInputB, storyInputC, storyInputD, storyInputE;
//Initially I only had one integer variable, storyInput, thinking I could reuse it
//but not only was it too confusing, but it just didn't work, so I added more

//Section A

storyPoint = 'A';

string sectionA_0 = "Press ENTER to go to the next line.";
string sectionA_1 = "Welcome to Paper Trees, a short interactive Halloween story.";
string sectionA_2 = "You will be presented with a series of choices.";
string sectionA_3 = "To select a choice you must enter the number next to it.";
string sectionA_4 = "Do you understand?";
string choiceA_1 = "1: Yes ";
string choiceA_2 = "2: No ";

//Section B

string sectionB_1 = "You find yourself in a wooded area in the middle of the night.";
string sectionB_2 = "You can't remember how you got here.";
string sectionB_3 = "In front of you is an ominous looking house that looks like it's been abandoned for a long time.";
string sectionB_4 = "Behind you is a path leading away from the house and into the dense forest.";
string sectionB_5 = "What do you do?";
string choiceB_1 = "1: Investigate the house.";
string choiceB_2 = "2: Take the path out of the woods.";

//Section C

string sectionC_1 = "You approach the house.";
string sectionC_2 = "It looks more eerie the closer you get.";
string sectionC_3 = "The old wooden door looks weathered by age but still appears solid.";
string choiceC_1 = "1: You try knocking on the door.";
string choiceC_2 = "2: You try opening the door.";

//Section C-H

string sectionCH_1 = "You reach out your hand to knock on the door,";
string sectionCH_2 = "but instead of connecting with solid wood your hand passes right through the door as if it isn't there.";
string sectionCH_3 = "Without warning something grabs your hand and pulls you through into the darkness.";
string sectionCH_4 = "Ending 1: Dark Illusions";

//Section C-K

string sectionCK_1 = "As your hand touches the handle you hear a click";
string sectionCK_2 = "and without warning you are falling down a long narrow hole as the floor swings open beneath your feet.";
string sectionCK_3 = "A moment later you land in an underground body of water with a painful splash.";
string sectionCK_4 = "Ending 2: Terrors Below";

//Section D

string sectionD_1 = "You make your way down the path and step into the clusters of trees the path runs through,";
string sectionD_2 = "their branches jutting out ominously like grasping hands.";
string sectionD_3 = "After walking for a short distance you see that the path separates in three different directions.";
string sectionD_4 = "The path to your left has a sign depicting an image of a serpent coiling around a fruit.";
string sectionD_5 = "The path directly in front of you has a sign depicting a woman resting under a tree.";
string sectionD_6 = "The path to your right has a sign depicting an image of a man digging a hole.";
string choiceD_1 = "1: You take the left path.";
string choiceD_2 = "2: You take the middle path.";
string choiceD_3 = "3: You take the right path.";
string choiceD_4 = "4: You head back to the house.";

//Section E

string sectionE_1 = "You continue down the dark forest path,";
string sectionE_2 = "and before long you arrive in a gloomy meadow.";
string sectionE_3 = "As you cross the meadow you realize you aren't alone.";
string sectionE_4 = "A hooded figure is standing there, it's hidden gaze fixed on you.";
string sectionE_5 = "After a moment of silence, it speaks.";
string sectionE_6 = "'Who deserves the blame?'";
string choiceE_1 = "1: The Man.";
string choiceE_2 = "2: The Woman.";
string choiceE_3 = "3: The Serpent.";

//Section F

string sectionF_1 = "Without warning the hooded figure vanishes in a puff of smoke, leaving you alone in the dark forest.";
string sectionF_2 = "Ending 3: No Answer";

//Story Output Section

cout << sectionA_0;
cin.get();
cout << endl << sectionA_1;
cin.get();
cout << endl << sectionA_2;
cin.get();
cout << endl << sectionA_3;
cin.get();
cout << endl << sectionA_4 << endl << endl;
cout << choiceA_1 << endl << choiceA_2 << endl;
cin >> storyInputA;
cin.ignore();
if (storyInputA == 1){
    storyPoint = 'B';
} else {
    cout << errorMessage << endl;
    cin >> storyInputA;
    cin.ignore();
    if (storyInputA == 1){
        storyPoint = 'B';
    } else {
        cout << errorEnding << endl << endl;
        return 1;
    }
}
if (storyPoint == 'B'){
cout << endl << sectionB_1;
cin.get();
cout << endl << sectionB_2;
cin.get();
cout << endl << sectionB_3;
cin.get();
cout << endl << sectionB_4;
cin.get();
cout << endl << sectionB_5 << endl << endl;
cout << choiceB_1 << endl << choiceB_2 << endl;
cin >> storyInputB;
cin.ignore();

if (storyInputB == 1){
    storyPoint = 'C';
} else if (storyInputB == 2){
    storyPoint = 'D';
} else {
    cout << errorMessage << endl;
    cin >> storyInputB;
    cin.ignore();
    if (storyInputB == 1){
    storyPoint = 'C';
    } else if (storyInputB == 2){
    storyPoint = 'D';
    } else {
    cout << errorEnding << endl << endl;
    return 1;
    }
}

if (storyPoint == 'C'){
    cout << endl << sectionC_1;
    cin.get();
    cout << endl << sectionC_2;
    cin.get();
    cout << endl << sectionC_3;
    cin.get();
    cout << endl << choiceC_1 << endl << choiceC_2 << endl;
    cin >> storyInputC;
    cin.ignore();
    if (storyInputC == 1){
        cout << endl << sectionCH_1;
        cin.get();
        cout << endl << sectionCH_2;
        cin.get();
        cout << endl << sectionCH_3;
        cin.get();
        cout << endl << sectionCH_4 << endl << endl;
        return 0;
    } else if (storyInputC == 2){
        cout << endl << sectionCK_1;
        cin.get();
        cout << endl << sectionCK_2;
        cin.get();
        cout << endl << sectionCK_3;
        cin.get();
        cout << endl << sectionCK_4 << endl << endl;
        return 0;
    } else {
        cout << errorMessage << endl;
        cin >> storyInputC;
        cin.ignore();
        if (storyInputC == 1){
            cout << endl << sectionCH_1;
            cin.get();
            cout << endl << sectionCH_2;
            cin.get();
            cout << endl << sectionCH_3;
            cin.get();
            cout << endl << sectionCH_4 << endl << endl;
            return 0;
        } else if (storyInputC == 2){
            cout << endl << sectionCK_1;
            cin.get();
            cout << endl << sectionCK_2;
            cin.get();
            cout << endl << sectionCK_3;
            cin.get();
            cout << endl << sectionCK_4 << endl << endl;
            return 0;
        } else {
        cout << errorEnding << endl << endl;
        return 1;    
        } 
    }
} else if (storyPoint == 'D'){
    cout << endl << sectionD_1;
    cin.get();
    cout << endl << sectionD_2;
    cin.get();
    cout << endl << sectionD_3;
    cin.get();
    cout << endl << sectionD_4;
    cin.get();
    cout << endl << sectionD_5;
    cin.get();
    cout << endl << sectionD_6;
    cin.get();
    cout << endl << choiceD_1 << endl << choiceD_2 << endl;
    cout << choiceD_3 << endl;
    cin >> storyInputD;
    cin.ignore();
    if ((storyInputD == 1) ||(storyInputD == 2) ||(storyInputD == 3)){
        cout << endl << sectionE_1;
        cin.get();
        cout << endl << sectionE_2;
        cin.get();
        cout << endl << sectionE_3;
        cin.get();
        cout << endl << sectionE_4;
        cin.get();
        cout << endl << sectionE_5;
        cin.get();
        cout << endl << sectionE_6;
        cin.get();
        cout << endl << choiceE_1 << endl;
        cout << choiceE_2 << endl << choiceE_3 << endl;
        cin >> storyInputE;
        cin.ignore();
        if ((storyInputE == 1) ||(storyInputE == 2) ||(storyInputE == 3)){
            cout << endl << sectionF_1;
            cin.get();
            cout << endl << sectionF_2 << endl << endl;
            return 0;
        } else {
            cout << errorMessage << endl;
            cin >> storyInputE;
            cin.ignore();
            if ((storyInputE == 1) ||(storyInputE == 2) ||(storyInputE == 3)){
                cout << endl << sectionF_1;
                cin.get();
                cout << endl << sectionF_2 << endl << endl;
                return 0;
            } else {
                cout << errorEnding << endl << endl;
                return 1;   
            }
        }
    } else {
        cout << errorMessage << endl;
        cin >> storyInputD;
        cin.ignore();
        if ((storyInputD == 1) ||(storyInputD == 2) ||(storyInputD == 3)){
        cout << endl << sectionE_1;
        cin.get();
        cout << endl << sectionE_2;
        cin.get();
        cout << endl << sectionE_3;
        cin.get();
        cout << endl << sectionE_4;
        cin.get();
        cout << endl << sectionE_5;
        cin.get();
        cout << endl << sectionE_6;
        cin.get();
        cout << endl << choiceE_1 << endl;
        cout << choiceE_2 << endl << choiceE_3 << endl;
        cin >> storyInputE;
        cin.ignore();
        if ((storyInputE == 1) ||(storyInputE == 2) ||(storyInputE == 3)){
            cout << endl << sectionF_1;
            cin.get();
            cout << endl << sectionF_2 << endl << endl;
            return 0;
        } else {
            cout << errorMessage << endl;
            cin >> storyInputE;
            cin.ignore();
            if ((storyInputE == 1) ||(storyInputE == 2) ||(storyInputE == 3)){
                cout << endl << sectionF_1;
                cin.get();
                cout << endl << sectionF_2 << endl << endl;
                return 0;
            } else {
                cout << errorEnding << endl << endl;
                return 1;   
            }
        }
    } else {
        cout << errorEnding << endl << endl;
        return 1;   
    }
    }
} else {
    cout << errorEnding << endl << endl;
    return 1; 
}
} else {
    cout << errorEnding << endl << endl;
    return 1; 
}
}

/*
I think it came together reasonably well and is decently organized,
but I know it's perhaps a bit rough around the edges.
Originally I had more branching paths and 6+ endings,
but it's probably for the best I scaled back
because getting it to work wasn't too hard,
but ironing out all the little issues was.
*/