/*
############################################################
#                 CSCI 160 - Assignment 3                  #
#                    Author: Jordan B.                     #
#                   Date: Oct. 12 2022                     #
############################################################
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

bool doesItLeap(int yS);
void output(int yS, int yF);
int main()
{
int yS;
int yF;
cout << "Starting year: ";
cin >> yS;
cout << "Ending year: ";
cin >> yF;
cout << endl << "Leap years between " << yS << " and " << yF << endl;
output(yS, yF);
return (0);
}


bool doesItLeap(int yS) {
	if (yS % 4 == 0) {
		if (yS % 100 == 0) {
			if (yS % 400 == 0) {return true;}
			else { return false;}
		} else { return true;}
	} else {return false;}
}

void output(int yS, int yF) {
	bool leap;
	if (yS <= yF) {
		leap = doesItLeap(yS);
		if (leap) {
			cout << yS << endl;
			yS++;
			output(yS, yF);
		} else {
			yS++;
			output(yS, yF);
		}
	}
}