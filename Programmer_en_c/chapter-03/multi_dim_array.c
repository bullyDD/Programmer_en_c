 /**
  * @file   : multi_dim_array.c
  * @author : bullydd
  * @brief  : Learn about C arrays, common errors when using them.
  *           
  * 
  *           Example :
  * 
  *           Multi-dimensional array
  *           -----------------------
  * 
  *           You also can declare multidimensional arrays. For example, the following 
  *           code creates a 2D array of floats with four rows and four columns:
  * 
  *           float matrix[4][4];
  * 
  *           To pass a multidimensional array into a function, you must explicitly specify 
  *           the dimensions, like this:
  * 
  *           void InvertMatrix (float mat[4][4]) {
  *                    // instructions here
  *            }
  * 
  * 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Default declaration of an array without initialization
    //int a[10];

    const size_t LIGNES = 3;
    const size_t COLONNES = 4;

    double tableau[LIGNES][COLONNES];

    // Double boucle for imbriquées pour initialiser le tableau
    for (size_t i = 0; i < LIGNES; i++) {

        for (size_t j = 0; j < COLONNES; j++) {
            tableau [i][j] = i * j;
        }
    }

    // Double boucle for affichage
    for (size_t i = 0; i < LIGNES; i++) {

        for (size_t j = 0; j < COLONNES; j++) {
           printf("tableau[%zu][%zu] = %d\n", tableau[i][j]);
        }
    }

    // ARRAY DONT BOUND CHECK
    // ATTENTION : Requesting invalid indices can lead to memory
    // corruption

    //printf("tableau[%zu][%zu] = %d\n", tableau[LIGNES][COLONNES]);    // output a random value

    printf("-------------------------------------------------------\n");
    printf("Variable\t\t Memory address\t\t Value\n");
    
    for (size_t i = 0; i < LIGNES; ++i) {
        for (size_t j = 0; j < COLONNES; j++) {
            printf("-------------------------------------------------------\n");
            printf("tab[%zu][%zu]\t\t %x\t\t %d\n", &tableau[i][j], tableau[i][j]);
        }
    }

    printf("-------------------------------------------------------\n");

    return EXIT_SUCCESS;
}