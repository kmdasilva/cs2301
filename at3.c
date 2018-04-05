/** file at3.c
 * @author Kaitlyn DaSilva
 * Program to create an array of random numbers sorting them, and printing them.
 *
 * Usage:
 *  ./at3 max_val num_rands
 *
 *Example:
 *  ./at3 20 5
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "print_arrays.h"
#include "sort.h"


int main(int argc, const char* argv[]) {
  int max=0, count=0;

  //seed rand() so that it generates different random numbers each tun
  //srand(time(0));

  //parse command-line data
  if (argc < 2){ //Check if  there was no entry
    printf("Must enter a maximum value and a number of randoms to generate!\n");
    return 1; //Indicate failure
  }
  else{
    max = atoi(argv[1]);
    count = atoi(argv[2]);
  }
  printf("max = %d\n count = %d\n", max, count);

  //Initialize and fill array with random numbers
  int a[count];
  *a = myrands(max, count);

  //Print unsorted random array
  printf("\nAn array of %d unsorted random integers with max %d:\n", count, max);
  print_int_array(a, count);

  //Sort the random numbers
  sort(a, count);

  //Print sorted random array
  printf("\nAn array of %d sorted random integers with max %d:\n", count, max);
  print_int_array(a, count);







  return 0; // Success!
}
