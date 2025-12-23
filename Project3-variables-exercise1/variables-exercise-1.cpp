//variables exercise 1
//CIS 1111
//Name: Erik Larson
//Date: 09/06/25
//Program Name: Declaring Variables Part 1
//Program Description: This Program is designed to
//teach us how to set up and use variables
//efficiently so that as new variables come up
//they can be plugged into the code without
//having to redo the whole thing every time
//which is why hardcoding is bad
//because it just makes things harder in future

//Specifically this program is intended to display
//a brief promotion for a theme park
//with the park and exhibits represented by variables

#include <iostream>
#include <string>

using namespace std;

int main()



{
    const string parkName = "Restored Eden Sanctuary";
    
    string attraction1 = "Revival Icons";
    string attraction2 = "Mighty Megafauna";
    string attraction3 = "Prehistoric Hunters";

    string exhibit1A = "Woolly Mammoth";
    string exhibit1B = "Dire Wolf";
    string exhibit1C = "Hooved Quagga";

    string exhibit2A = "Glyptodont";
    string exhibit2B = "Megatherium";
    string exhibit2C = "Arctotherium";

    string exhibit3A = "Smilodon";
    string exhibit3B = "Thylacine";
    string exhibit3C = "Megalania";

    double ticketPrice = 319.99;



    cout << "Welcome to " << parkName << 
    ". Enter a once lost world of magnificent wildlife and experience them for yourself." << endl;
    cout << ""<< endl;
    cout << parkName << " features many unique animals, including the "<< exhibit1A << ", " << endl;
    cout << "found in " << attraction1 << ", " "the "
    << exhibit2A << ", housed in " << attraction2 << ", and the "
    <<exhibit3A << ", " << endl;
    cout << "lurking in " << attraction3 << "." << endl << endl; 
    cout << "All of this and more for the reasonable price of $" << ticketPrice << ". " << endl << endl;

    

    //Jurassic Park is sadly science fiction
    //But the core concept could be done for more recently extinct species
    //So I ran with it.

    return 0;}


//though I can understand why programmers
//sometimes resort to hardcoding
//there have been times where a module said
//just use this super cool shortcut
//to perform X task much faster
//but when I tried to use it it didn't work
//even after triple checking I'd done what they said
//so I just had to do it the longer way
//because it actually worked
//still, that should be a last resort
//and it's better to try to figure out why the
//code isn't doing what you wanted it to do
//and make the necessary adjustments
//then to force it to cooperate
//because those methods just paper over the problem
//and can cause further issues down the line
//I was originally going to try to code something
//so that at each corresponding spot
//it would randomly select either A B or C
//for each exhibit mentioned
//but chickened out because I'm rusty
//and I'd forgotten that even simple code
//can take a while to put together
//and make sure it's working properly
//plus I've never worked in C++ before
//so maybe it's best I didn't try
//something that complicated yet
//this was probably too long, sorry





