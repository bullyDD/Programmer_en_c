/*
    Écrire un programme qui affiche le plus grand et le plus petit d’une suite d’entiers
    saisis. 
    Les nombres saisis ne sont pas conservés en mémoire. 
    La suite se termine par la valeur 0.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    int nbreSaisi = 0;
    bool canExit = false;

    int MAX = 0;
    int MIN = 0;

    while (canExit != true) {

        printf("Entrez un nombre :");
        scanf("%d", &nbreSaisi);

        if (nbreSaisi > MAX) { MAX = nbreSaisi;}
        if (nbreSaisi < MAX) { MIN = nbreSaisi;}

        printf("\nMax = %d\t MIN = %d\n", MAX, MIN);
        if (nbreSaisi == 0) {canExit = true;}
    }

    return EXIT_SUCCESS;
}
