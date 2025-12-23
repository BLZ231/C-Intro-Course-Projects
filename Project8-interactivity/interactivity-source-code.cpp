#include<iostream>
#include<string>

using namespace std;

//Erik Larson
//09/27/25

int main() {

    //variables
	string userName;
	double userNum, squaredNum;

    //input
	cout << "Please input a number: ";
	cin >> userNum;
    cin.ignore();
	cout << "\nPlease enter your full name: ";
	getline(cin, userName);

    //formula
    squaredNum = userNum * userNum;

    //output
	cout << "\nThank you, " << userName << ". The square of your number is: " << squaredNum;
	cout << endl << endl;
	system("pause");
	return 0;
}

/*
Process

I started by pasting the source code into the .cpp file
and then I ran it just to see what would happen.
It seemed to work, as I was able to input a number and a full name,
but it only displayed the first name, not the last name,
and instead of displaying the square of the number
it instead displayed a crazy high random number.
I assessed possible problems and fixes
and started by replacing the cin >> userName line
with the getline function.
After a few more minor tweaks and set backs 
it seemed to be working properly and I was about to wrap up,
but I decided to test it by using the sample output
provided in the assignment instructions just to be sure.
I'm very glad I did, because it reminded me I needed to
change int to double.
The above section was originally longer, but then I remembered
that you said you didn't want excessive details.
I don't know if I really learned anything new strictly speaking
as this all felt like variations of things already covered.
While it is the first time adjusting code that already exists,
the formatting wasn't odd or different enough
to make much of a difference.
I will say though that C++ has been a little annoying to work with
because I had gotten used to programs that read all the code first
and then compiled and executed it rather than doing it line by line.
It ends up making the errors feel more random and arbitrary
than they already were.
I can see why the line by line way was done originally
but it doesn't feel like the best way today.
Still, I suppose it's good to learn how different languages work
and given what a hot mess of a language English is
I suppose it's not fair to throw stones at C++.
*/