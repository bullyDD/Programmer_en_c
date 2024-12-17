 /**
  * @file   : array.c
  * @author : bullydd
  * @brief  : Learn about C arrays, common errors when using them.
  *           
  *           An array is a collection of multiple elements of the 
  *           same type (in C) regrouped under the same identifier.
  * 
  *           The following code declare an array of 10 integers called a 
  *           and sets the first element index 0 to 10.
  * 
  *           Example :
  * 
  *           One-dimensionnal array
  *           ----------------------
  * 
  *           int a[10];        // Déclaration sans initialisation
  *           a[0] = 10;
  * 
  *           By default, elements in an array are uninitialized. It is more
  *           convenient to use the initializer synthax or loop.
  * 
  *           C stores arrays contiguously in memory. This means that the data
  *           at index 0 is right next to the data at index 1
  * 
  * 
*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // Default declaration of an array without initialization
    int a[10];

    // Initializer synthax
    // Without specifying dimension you must initialization every elements
    // int fib [] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    // Initialization with for loop
    for (size_t i = 0; i < 10; ++i) {
        a[i] = i + 1;
    }

    // Print elements of the array
    for (size_t i = 0; i < 10; ++i) {
        printf("a[%zu] = %d\n", i, a[i]);
    }

    // ARRAY DONT BOUND CHECK
    // ATTENTION : Requesting invalid indices can lead to memory
    // corruption

    //printf("a[11] = %d\n", a[11]);    // output a random value

    printf("-----------------------------------------------\n");
    printf("Variable\t Memory address\t\t Value\n");
    
    for (size_t i = 0; i < 10; ++i) {
        printf("-----------------------------------------------\n");
        printf("a[%zu]\t\t %p \t %d\n", i, &(a[i]), a[i]);
    }

    printf("-----------------------------------------------\n");
    
    return EXIT_SUCCESS;
}