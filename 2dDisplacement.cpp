/*
############################################################
#                 CSCI 160 - Assignment 2                  #
#                    Author: Jordan B.                     #
#                   Date: Sept. 27. 22.                    #
############################################################
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;



//forward declares the function to calculate the disp. between points
float disp(float x1, float y1, float x2, float y2);			

int main()													
{
//Declares the variables for both the final and inital value of x and y
float x1, x2, y1, y2;			


//Prompts user for, and stores each co-ordinate value in a corresponding float variable
cout << "Enter x1: ";	
cin >> x1;	


cout << "Enter y1: ";	
cin >> y1;		


cout << "Enter x2: ";	
cin >> x2;		


cout << "Enter y2: ";	
cin >> y2;	


//reads x1, y1, x2, y2, and substitutes them for xi, yi, xf, yf in the func. disp, then 
//performs func. disp, outputting the distance between the points as a float
const float dist = disp( x1, y1,  x2,  y2);	
cout << endl << "Distance between two points: " << dist << endl;	//gives the user the value of the distance between the two points	


return (0);
}


//Fully declares function to calculate disp. between points
float disp(float xi, float yi, float xf, float yf)			
{
	float xd = pow(xf - xi, 2);	//"a^2" x distance
	float yd = pow(yf - yi, 2);	//"b^2" y distance
	float ad = sqrt(xd + yd);	//Performs pythagoras' theorum (a^2 + b^2 = c^2)^(1/2)   c = total displacement
	return (ad);
}