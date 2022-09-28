/*
############################################################
#                 CSCI 160 - Assignment 2                  #
#                         Author:                          #
#                          Date:                           #
############################################################
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;


void outPut(int d, int q, int di, int n, int p);

int main()
{
double fullTtl;


cout << "Enter the change amount: ";
cin >> fullTtl;


double centsTtl = fullTtl * 100;


int dollars = centsTtl / 100;
int dollarsRem = centsTtl - (dollars * 100);//Done this way to avoid rounding error sometimes present
											//when centsTtl was declared as an int

int quartRem = dollarsRem % 25;
int quarters = dollarsRem / 25;


int dimesRem = quartRem % 10;
int dimes = quartRem / 10;


int nickelsRem = dimesRem % 5;
int nickels = dimesRem / 5;


int pennies = nickelsRem;			//Unneccicary, but good for organization

cout << endl;

outPut(dollars, quarters, dimes, nickels, pennies);

}



void outPut(int d, int q, int di, int n, int p)
{

cout << "Dollars: " << d << endl;
cout << "Quarters: " << q << endl;
cout << "Dimes: " << di << endl;
cout << "Nickels: " << n << endl;
cout << "Pennies: " << p;

}