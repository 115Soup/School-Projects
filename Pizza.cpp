/*
############################################################
#                 CSCI 160 - Assignment 1                  #
#                       Author:Jordan B.                   #
#                       Date:Sept.22.22                    #
############################################################
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  const int totalS = 32;                                                          //total number of slices of pizza to begin with
  int ppl;                                                                        //# of people attending party

  printf("How many people are at the party?\n");                                  //User is prompted for the number of people,
  scanf("%d" ,&ppl);                                                              //and the value they give is stored in an integer, "ppl"


  int slicesi = totalS / ppl;                                                     //dec. + calc. the slices each guest will get as an int, "slicesi"
  float slicesf = float(totalS) / float(ppl);                                     //dec. + calc. the slices each guest will get, permitting the cutting of slices + stores it as a float, "slicesf"
  int slicesl = totalS % ppl;                                                     //dec. + calc. the slices remaining after "slicesi" is calculated
  printf("Each guest will get %d slices with %d left over,\n" ,slicesi ,slicesl); //Tells user how many whole slices each guest will get + gives remainder
  printf("or,\n");
  printf("Each guest will get %.2f slices.\n" ,slicesf);                          //tells user how many slices each guest will get if cutting slices is permitted
  return 0;
}
