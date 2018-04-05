/** file at2.c
* @author Kaitlyn DaSilva
* Program to create an array of numbers from command line inputs
* and demonstrate that array.
*/

#include <stdio.h>
#include <stdlib.h>
#include "print_arrays.h"
#include "sort.h"

#define MAX_NUMS 5

/** Main program for creating arrays from command line inputs,
 * sorting them, and demonstrating them.
 * @return 0 Indicates success.
 */

 int main(int argc, const char* argv[]){
   int arr[MAX_NUMS+1]; //array for doubles

   //fills array and returns lenth of array
   int a = makearr(argc, argv, arr,  MAX_NUMS );
   if (a == 1){
     return EXIT_FAILURE; //occurs if entries>MAX_NUMS
   }


   sort(arr, a); //sorts array into ascending order

   printf("Sorted array:\n");
   print_int_array(arr, a);
   return 0; //success
 }
