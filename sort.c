#include <stdio.h>
#include "sort.h"
#include "print_arrays.h"

/** file sort.c
 * @author Kaitlyn DaSilva
 * @param arr[] an array of integers
 * @param length the length of arr[]
 *
 * Function which sorts an array of ints into ascending order.
 */

 void sort(int a[], int length){
   int step = 0, i= 0;
   int tmp;

   for (step = 0; step < length-1; step++){ //step = pass through array
     for (i = 0; i < length-step-1; i++){ //si = index in array being checked

       if (a[i] > a[i+1]){
         tmp = a[i];    //put this value in a temp variable
         a[i] = a[i+1]; //assign the next value to this index
         a[i+1] = tmp;  //assign the value in the temp var to the next index
       }
     }
   }
 }

 /** Generates a (suedo) random integer between 0 and max inclusive
 * @param max Maximum value for generated random number
 * @return num Random number that has been generated
 */
 int myrand (int max){
   int rando, num;
   num = ( rand() % (max+1) );

   return num;
 }

 /** Generates an array of (suedo) random integers between 0 and max inclusive
 * @param max Maximum value for generated random number
 * @param count The number of random numbers to generate
 * @return a Aan array of random number that has been generated
 */
 int myrands (int max, int count){
   int a[count]; //array to hold rand numbers
   int i; //loop counter

   //printf("For loop:\n");
   for(i = 0; i < count; i++){
     a[i] = myrand(max);
     //printf("a[%d] = %d\n", i, a[i]);
   }
   return *a;
 }
