/*
    Écrire un programme qui échange deux entiers. 
    Afficher les entiers avant et après échange.
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int a = 0, b = 0;
    int temp = 0;

    printf("Veuillez saisir entier 1 : ");
    scanf("%d", &a);

    printf("Veuillez saisir entier 2 : ");
    scanf("%d", &b);


    printf("Avant echange : a = %d\t\t b=%d \n", a, b);
    
    // Procede a l'echange
    temp = a;
    a = b;
    b = temp;

    printf("Apres echange : a = %d\t\t b=%d \n", a, b);
    return EXIT_SUCCESS;
}