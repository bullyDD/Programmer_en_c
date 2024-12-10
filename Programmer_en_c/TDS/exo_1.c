/*
    Écrire un programme qui saisit deux entiers et affiche leur produit. Modifier
    ensuite le programme afin d'en saisir deux réels.

    Commandes de compilation

    gcc -Wall -Werror -std=c17 -o prog exo_1.c
    ./prog.exe

*/

#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // Declaration de variables

    // Q1)
    //int a = 0, b = 0;
    //int c = 0;

    // Q2)
    
    float a = 0.0, b = 0.0;
    float c = 0.0;
    

    printf("Veuillez saisir entier 1 : ");
    //scanf("%d", &a);

    scanf("%f", &a);

    printf("Veuillez saisir entier 2 : ");
    //scanf("%d", &b);

    scanf("%f", &b);

    c = a *b;

    //printf("%d * %d = %d \n", a, b, c);
    printf("%.2f * %.2f = %.3f \n", a, b, c);
    
    return EXIT_SUCCESS;
}