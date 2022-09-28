/*
############################################################
#                 CSCI 160 - Assignment 1                  #
#                      Author: Jordan B.                   #
#                     Date: Sept. 24. 22                   #
############################################################
*/

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	int n;			//Declares variable that wiill represent the nnumber after the4 changes up to t`he point
	int x;			//Variable for original number

	cout << "Please enter a whole number:" << endl;			//Promps user for whole number
	cin >> x;												//Reads user imput
	n = x + 3;												//sets initial value for n 
	cout << "Step 1: add 3 to the number:" << setw(3) << n << endl << endl;

	n = n * 2;
	cout << "Step 2: multiply this number by 2:" << setw(3) << n << endl << endl;

	n = n - 4;
	cout << "Step 3: subtract 4 from this number:" << setw(3) << n << endl << endl;

	n = n / 2;
	cout << "Step 4: divide this number by 2:" << setw(3) << n << endl << endl;

	n = n - x;
	cout << "Step 5: subtract your original number from the quotent:" << setw(3) << n << endl << endl;

	cout << "This will turn any whole number into 1, try it again!" << endl;

	return 0;
}
