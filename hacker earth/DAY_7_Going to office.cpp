Alice has the following two types of taxis:

• Online taxi: It can be booked by using an online application from phones Classic taxi: It can be booked anywhere on the road

The online taxis cost O, for the first 0 km and O for every km afterward. The classic taxis travel at a speed of C
km per minute. The cost of classic taxis are C C and Ca that represents the base fare, cost for every minute that is spent in the taxi, 
and cost for each kilometer that you ride

You are going to the office from your home. Your task is to minimize the cost that you are required to pay. The distance from your home to 
the office is D. You are required to select whether you want to use online or classic taxis to go to your office. If both the taxis cost the same, 
then you must use an online taxi

Input format

• First line: Single integer D that denotes the distance from your house to the office

• Next line: Three integers O. Of and O

• Next line: Four integers C, C Cm and Ca

Output format

If you select an online taxi to travel, then print a string Online Taxi Otherwise, select Classic Taxi' You can print this string in a new, single line.

Constraints

1≤ D. O, Of Od, Cr, Ch. Cm, Cd ≤ 10°

OUTPUT:

#include<bits/stdc++.h>

using namespace std;

int main(){

long long int D,Oc,Of,Od,Cs,Cb,Cm,Cd; 
	cin >> D >> Oc >> Of >> Od >> Cs >> Cb >> Cm >> Cd;

    if(Oc + (D-Of)*Od<=Cb + (D*Cd) + (D/Cs)*Cm) 
		cout << "Online Taxi";

    else cout << "Classic Taxi";

}
