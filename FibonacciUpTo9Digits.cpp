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

int fibonacci(int term, int &n, int &nPrev, int &sum);

int main()
{
int term = 0;
int n = 1;
int nPrev  = 1;
int sum = 0;
cout << "*****" << endl << string(9, '*') << endl << string(15, '*') << endl;
fibonacci(term, n, nPrev, sum);
return (0);
}

int fibonacci(int term, int &n, int &nPrev, int &sum) {
	cout << sum << endl;
if (term == 0) {
	term++;
	cout <<"Term " << term << ": " << setw(10) << n << endl;
	sum += n;
	fibonacci(term, n, nPrev, sum);

} else if (n < 1000000000) {
	term++;
	cout << "Term " << term << ": " << setw(10) << n << endl;
	sum += n;
	n += nPrev;
	nPrev = n - nPrev;
	fibonacci(term, n, nPrev, sum);

} else if (n >= 1000000000) {
cout << endl << string(22, '*') << endl;
cout << "Sum of the " << term << " terms: " << sum << endl;
cout << string(35, '*');

}
return (0);
}

