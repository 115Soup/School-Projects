/*
############################################################
#                 CSCI 160 - Assignment 3                  #
#                         Author:                          #
#                          Date:                           #
############################################################
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int fibonacci(int i);

int main()
{
cout << "*****" << endl << string(9, '*') << endl << string(15, '*') << endl;
const int max = pow(10, 9);
int sum = 0;
int i = 1;
int term = 1;
while (term < max) {
    term = fibonacci (i);
    if (term < max ) {
    sum += term;
    cout << "Term " << i << ": " << setw(10) << term << endl; 
    i++;
}}
cout << string(22, '*') << endl;
cout << "Sum of the " << (i - 1) << " terms: " << setw(10) << sum << endl;
cout << string(35, '*');
}

int fibonacci(int i) {

if (i <= 1) { return i; }
return fibonacci(i - 1) + fibonacci(i - 2);}






