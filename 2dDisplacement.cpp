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

float disp(float x1, float y1, float x2, float y2);			//forward declares the function to calculate the dist. between points

int main()													//Main function of the program
{

float x1, x2, y1, y2;			//Declares the variables for both the final and inital value of x and y

cout << "Enter x1: ";	//Prompts user for x1 value 
cin >> x1;						//Stores imput in float x1

cout << "Enter y1: ";	//Prompts user for y1 value
cin >> y1;						//Stores input in float y1

cout << "Enter x2: ";	//Prompts user for x2 value
cin >> x2;						//Stores input in float x2

cout << "Enter y2: ";	//Prompts user for y2 value
cin >> y2;						//Stores input in float y2

const float dist = disp( x1, y1,  x2,  y2);	//reads x1, y1, x2, y2, and substitutes them for xi, yi, xf, yf in the func. disp, then 
											//performs func. disp, outputting the distance between the points as a flaot

cout << endl << "Distance between two points: " << dist << endl;	//gives the user the value of the distance between the two points	

return (0);
}



float disp(float xi, float yi, float xf, float yf)			//Fully declares function to calculate dist. between points
{
	float xd = pow(xf - xi, 2);	//"a^2" x distance
	float yd = pow(yf - yi, 2);	//"b^2" y distance
	float ad = sqrt(xd + yd);	//Performs pythagoras' theorum (a^2 + b^2 = c^2)^(1/2)   c = total displacement
	return (ad);				//Returns value of ad, in form float, due to the declaration of the func. being done with float
}