/**
 *  @file   : exercice_2_1.c
 *  @author : bullydd
 *  @brief  : Simple program for variable declaration
 *  @version: 0.1
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main (void) {

    short age = 0;
    char lettre = '\0';     // \0 le caractère nul
    float somme = 0.0;      // . est le separateur décimal en informatique
    float moyenne = 0.0;

    // Fonction pour afficher du texte dans la console
    printf("age= %d  lettre= %c somme= %f moyenne=%f \n", age, lettre, somme, moyenne);
    return EXIT_SUCCESS;
}