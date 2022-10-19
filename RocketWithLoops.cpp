/*
############################################################
#                 CSCI 160 - Assignment 3                  #
#                    Author: Jordan B.                     #
#                   Date: Oct. 13 2022                     #
############################################################
*/


#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

//Forward fuction declarations
void askForInput(int &size);
void rocket(int size, int line, int maxLine);
void top(int size, int line, int maxLine);
void breakLine(int maxLine);
void midUp(int size, int line);
void midDown(int size, int line);
void triangleUp(int line);
void triangleDown(int size, int line);


int main() {
    //variable declarations
    int size;
    int line = 1;
    int output;
    askForInput(size);
    //Data collection
    int maxLine = 5 + (2 * (size - 3));
    //builds rocket
    rocket(size, line, maxLine);
    return (0);
}

//asks user for input, and stores it in size
void askForInput(int &size) { 
    int input;
    cout << "Size: ";
    cin >> input;
    if ((cin.fail()) || (input < 3)) {
        cout << "Please enter an integer greater than 3!" << endl;
        cin.clear();
        cin.ignore(80, '\n');
        askForInput(size);
    } else { 
        size = input;
    }
}
//builds rocket out of component functions using size, line, and maxLine
void rocket(int size, int line, int maxLine) {
top(size, line, maxLine);
breakLine(maxLine);
midUp(size, line);
midDown(size, line);
breakLine(maxLine);
midDown(size, line);
midUp(size, line);
breakLine(maxLine);
top(size, line, maxLine);
}
//top component of rocket
void top(int size, int line, int maxLine) {
    while (line <= maxLine) {
        int spacing = (maxLine + 1) - line;
        cout << string(spacing, ' ') << string(line, '/') << "**" << string(line, '\\') << string(spacing, ' ') << endl;
        line++;
    }
}
//lines made of + on edges, * and = in between
void breakLine(int maxLine) {
    cout << "+";
    while (maxLine >= 0) {
        cout << "=*";
        maxLine--;
    }
    cout << "+" << endl;
}
//middle sections "pointing up"
void midUp(int size, int line) {
    while (line <= size) {
        int dotsUp = size - line;
        cout << "|" << string(dotsUp, '.');
        triangleUp(line); 
        cout << string(dotsUp, '.') << string(dotsUp, '.');
        triangleUp(line);
        cout << string(dotsUp, '.') << "|" << endl; 
        line++;
    }
}
//iddle sections "popinting down"
void midDown(int size, int line) { 
    while (line <= size) { 
        int dots = line - 1;
        cout << "|" << string(dots, '.');
        triangleDown(size, line);
        cout << string(dots, '.') << string(dots, '.');
        triangleDown(size, line);
        cout << string(dots, '.') << "|" << endl;
        line++;
    }
}
//outputs the mall triangles pointing up 
void triangleUp(int line) {
    while (line > 0) {
        cout << "/\\" ;
        line--;
    }
}
//provides small triangles pointing down
void triangleDown(int size, int line) {
    while (line <= size) {
        cout << "\\/";
        line++;
    }
}