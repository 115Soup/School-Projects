
#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

void sortMe(float n1, float n2, float n3);

int main(){

float n1, n2, n3; 
//Prompts user for 3 numbers as imput
cout << "Number #1: ";
cin >> n1;

cout << "Number #2: ";
cin >> n2;

cout << "Number #3: ";
cin >> n3;

//runs sortMe function
sortMe(n1, n2, n3);

return (0);

}
//sorts the numbers from smallest to largest, and outputs them to user
void sortMe(float n1, float n2, float n3){

float small, med, large;

if ((n1 < n2) && (n1 < n3)){
    small = n1;
    if (n2 < n3){
        med = n2;
        large = n3;}
    else {
        med = n3;
        large = n2;}
}

if ((n2 < n1) && (n2< n3)){
    small = n2;
    if (n1 < n3){
        med = n1;
        large = n3;}
    else {
        med = n3;
        large = n1;}
}
if ((n3 < n1) && (n3 < n2)){
    small = n3;
    if (n1 < n2){
        med = n1;
        large = n2;}
    else{
        med = n2;
        large = n1;}
}

cout << endl << "Sorted order: " << small << ", " << med << ", " << large << endl;

}