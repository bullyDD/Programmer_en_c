 /**
  * @file   : pointers.c
  * @author : bullydd
  * @brief  : Learn about C pointer, common errors when using them.
  * 
  *           To understand pointers, it first help to remember
  *           the way computer store variables in memory. During program
  *           execution entering a function automatically allocate memory
  *           for local variables in a segment of memory called the STACK.
  *           This means all local variables in a function have memory
  *           addresses known to the C++ program.
  * 
  *           The address-of operator (&) queries the address of a variable.
  *           To get the address of a variable, place & in front of the name
  * 
  *           Example:
  * 
  *           int a = 100;
  *           std::cout << "a\' address is " << std::hex << &a << std::endl;
  * 
  *           A pointer is a variable that store an integral value corresponding
  *           to a memory address.
  * 
  *           Example:
  * 
  *           int y = 125;
  *           int* ptr = NULL;        // Declare a pointer to an integer value
  *                                      // and is initialize to nullptr
  *                                     //  The * after the type signifies a pointer.
  * 
  *           // Now ptr points to y
  *           ptr = &y;
  * 
*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int y = 125;
    int* ptr = NULL;

    // This is runtime error called (Memory leak)
    // We are trying to dereference a null-pointer : YOU CANNOT 
    // READ A NULL-POINTER

    //printf("ptr = %d\n", *ptr);

    // This is the good way : Assigning a non-null value to the pointer first 
    ptr = &y;

    // The * operator also dereferences the pointer.
    // Dereferencing a pointer accesses the memory "pointed to" by the pointer.
    
    printf("------------------------------------------------------------------------\n");
    printf("Code \t\t Variable\t Memory address\t\t Value\n");
    printf("------------------------------------------------------------------------\n");
    printf("int y = 125;\t y\t\t %p \t\t %d\n", &y, y);
    printf("------------------------------------------------------------------------\n");
    printf("int* ptr = &y;\t ptr\t\t %p \t\t %p\n", &ptr, ptr);
    printf("------------------------------------------------------------------------\n");

    *ptr = 42;  // This instruction changes to value of y to 42
                // Dereferencing ptr goes to the memory address &y
                // thus writing a value at this memory address overwrites the
                // value of y (125).

    printf("*ptr = 42;\t ptr\t\t %p \t\t %d\n", ptr, *ptr);
    printf("------------------------------------------------------------------------\n");
    return EXIT_SUCCESS;
}