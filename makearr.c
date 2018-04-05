#include <stdio.h>
#include <stdlib.h>
#include "print_arrays.h"

/** file makearr.c
 * @author Kaitlyn DaSilva
 *
 * @param argc from command line input
 * @param argv[] from command line input
 * @param a[] array of doubles to fill with data from argv[]
 * @param size the number of elements in a[]
 *
 * @return maxi the number of numbers from the command line in the array
 *
 * Function which creates array of numbers as entred in the command line.
 */


int makearr(int argc, const char* argv[], int a[], int size ){
  int entries = 0; //To hold the number of inputs
  int maxi = 0; //Highest loop iteration
  int i; //loop coutner

  if (argc < 2){ //Check if  there was no entry
    printf("Must enter a number or numbers  on the command line!\n");
    return 1; //Indicate failure
  }
  else{
    //set entries to number of entries in comand line -1 for the program call
    entries = argc - 1;
  }

  //Determining loop termination
  if(entries > size){ //If the user inputs more numbers that MAX_GRADES
      printf("%d numbers were input but only %d can be processed. \
       Please enter %d or less numbers.\n", entries, size, size);
      return 1; //Indicate failure
      maxi = size; //The loop will iterate size times
    }
   else{
     maxi = entries; //The loop will iterate entries times
   }


  //loop assigns grades to array grades
  for(i=0; i < maxi; i++){
    //start from argv[i+1] because argv[i] is the execute command
    int x = atoi(argv[i+1]);
    a[i] = x;
  }

  return maxi;

}
