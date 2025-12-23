/*
Basic Math Project
CIS1111

Name: Erik Larson
Date: 09/14/25
Program Name: To Infinity & Beyond (I guess)
Program Description:
The program is designed to calculate
Buzz Lightyear's rate of travel and fuel use
for each trip and display the results

while trying to ignore the glaring problems
and scientific inaccuracies 
no matter how much they bug me
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()

{
const double fuelBurnRate = 12.75;
// gallons per minute
const double travelRate = 33865.7;
// miles per minute

//Trip distances
double distance1 = 77891.0;
double distance2 = 24812.0;
double distance3 = 163628.0;
//I know trip 1 isn't necessary,
//but it looks wrong with just 2 and 3.

double time1 = distance1 /travelRate;
double fuel1 = time1 * fuelBurnRate;

double time2 = distance2 / travelRate;
double fuel2 = time2 * fuelBurnRate;

double time3 = distance3 / travelRate;
double fuel3 = time3 * fuelBurnRate;

//Desired display results
cout << "Buzz Lightyear can travel " << travelRate << " miles per minute. \n";
cout << "   \n";
cout << "For Buzz Lightyear to complete trip 1, his travel time would be "
<< time1 << " minutes and it would burn "
<< fuel1 << " gallons of fuel. \n";
cout << "   \n";
cout << "For Buzz Lightyear to complete trip 2, his travel time would be "
<< time2 << " minutes and it would burn "
<< fuel2 << " gallons of fuel. \n";
cout << "   \n";
cout << "For Buzz Lightyear to complete trip 3, his travel time would be "
<< time3 << " minutes and it would burn "
<< fuel3 << " gallons of fuel. \n";
cout << "   \n";

return 0;
//^I initially forgot the return 0
//But it still worked anyway.
}

/*
Pseudo Code

Buzz Lightyear burns 12.75 gallons per minute

Trip 1
Distance: 77,891 miles (D1)
Travel time: 2.3 minutes (X1)
Fuel used: 29.33 gallons (Y1)

Means Buzz travels 33,865.7 miles per minute

Trip 2
Distance: 24,812 miles (D2)
Travel time: X2
Fuel used: Y2

Trip 3
Distance: 163,628 miles (D3)
Travel time: X3
Fuel used: Y3

constant1: 12.75 gallons per minute
constant2: 33,865.7 miles per minute

variableA: distance
variableB: travel time
variableC: fuel used

Print the following to console:
Buzz Lightyear's rate of travel in minutes.
The amount of time and fuel it would take Buzz
to make trip 2 & 3.
(^This paragraph was actually the first part of 
the pseudocode I wrote and expanded from
though I know it might not look like it.)

(Below is what needs to print to the console)

[Buzz Lightyear can travel {constant2}.

For Buzz Lightyear to complete trip 2, his travel
time would be {variableB} minutes and it would burn
{variableC} gallons of fuel.

For Buzz Lightyear to complete trip 3, his travel
time would be {variableB}]
*/

/*
Petty Scientific Quibbles

Firstly, Buzz's travel rate is faster than the speed
of light, which is physically impossible. 
Now in theory there are methods of circumventing
the speed of light, but these methods would have
nothing to do with this kind of fuel burn rate
calculation.

Secondly, the only way that the distances between the
planets would remain consistent and unchanging
would be if their respective orbits were in perfect
sync. This is likely physically impossible, and 
even if it isn't the arrangement would likely be
too unstable to last very long.
In any case we've never observed planetary bodies
behaving this way.
The closest is the orbit of moons around a planet,
since the distance between each individual moon
and the planet remains relatively consistent

Thirdly, the reason why we have to continuously use
fuel to move vehicles forward on earth is because
there are all kinds of forces that cause friction
which slow things down. But space is a vacuum that
is mostly empty, and so friction stops being an
issue. So fuel would only be necessary for escaping
a planets gravity and for minor course corrections,
continual use would be a waste.
*/