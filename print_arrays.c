/** file print_arrays.c
 * @author Kaitlyn DaSilva
 *
 * Functions for printing arrays.
 */

#include <stdio.h>
#include "print_arrays.h"

/** Print an array of ints, one per line.
    @param a Array to print
    @param num_entries Number of entries in the array
*/

/** Print an array of integers
* @param a[] array of integers to print.
* @param num_entries number of integers in the array.
* @return void
*/
void print_int_array(int a[], int num_entries) {
  int i; // Loop counter

  for (i = 0; i < num_entries; i++) {
    printf("%d\n", a[i]);
  }
}

/** Print an array of integers
* @param a[] array of doubles to print.
* @param num_entries number of doubles in the array.
* @return void
*/
void print_double_array(double a[], int num_entries) {
  int i = 1; // Loop counter

  do {
    printf("%f\n", a[i]);
    i = i+1;
  } while( i < num_entries+1 );
/*
  for (i = 0; i < num_entries; i++) {
    printf("%f\n", a[i]);
  }
  */
}
