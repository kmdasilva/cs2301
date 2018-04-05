/** file at.c
 * @author Kaitlyn DaSilva
 *
 * Program to demonstrate fixed-size arrays in C.
 */

#include "print_arrays.h"

#define SAMPLE_INT_ARRAY_SIZE (10)
#define SAMPLE_DOUBLE_ARRAY_SIZE (10)


/** Main program for demonstrating arrays. It fills them and prints them.
 * @return 0, Indicating success.
 */

int main() {
  int i; // Loop counter
  int a[SAMPLE_INT_ARRAY_SIZE]; // Sample array for demonstration
  double b[SAMPLE_DOUBLE_ARRAY_SIZE]; // Sample array for demonstration


  // Fill the array with consecutive integers
  for (i = 0; i < SAMPLE_INT_ARRAY_SIZE; i++) {
    a[i] = i;
  }
  // Fill the array with consecutive DOUBLES
  for (i = 0; i < SAMPLE_DOUBLE_ARRAY_SIZE; i++) {
    b[i] = i;
  }

  // Now print them out
  print_int_array(a, SAMPLE_INT_ARRAY_SIZE);
  print_double_array(a, SAMPLE_DOUBLE_ARRAY_SIZE);


  return 0; // Success!
}
