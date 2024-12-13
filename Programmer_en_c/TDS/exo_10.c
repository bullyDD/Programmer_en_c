/*
    Écrire un programme dans lequel vous déclarer et initialiser un tableau
    d’entiers tab avec des valeurs, dont certaines seront nulles. 
    Le programme doit parcourir le tableau et afficher les index des éléments nuls
    du tableau (sans utiliser aucune variable de type entier)

*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Case 1:

    // DANGER : Parfois on peut se tromper : La dimension peut etre
    // differente du nombre d'élements

    // int tab[10] = {1, 2, 3, 4, 5, 6, 7, 0, -1, -10};
    // int tab [] = {1, 2, 3, 4, 5, 6, 7, 0, -1, -10};

    // case 2: Déclaration du tableau
    int tab [10];

    // Approche 1 :
    // Initialisation du tableau
    for (size_t i = 0; i < 10; i++) {
        
        // Si i est pair alors valeur est differente de zéro
        if(i % 2 == 0) {
            tab[i] = i + 2;
        }
        // Si i est impair la valeur est égale à zéro
        else
        {
            tab[i] = 0;
        }

       printf("i = %zu\n", i);
    }

    // Approche 2
    // Initialisation
    for (size_t i = 0; i < 10; i++) {

        // Utilisateur qui doit saisir les valeurs
        // Usage de la fonction scanf()
        printf("Entrez element %zu :", i);
        printf("\n");
        scanf("%d", &tab[i]);
    }

    printf("\n");


    // Pour l'affichage
    for (size_t i = 0; i < 10; i++) {
        printf("tab[%zu] = %d\n", i, tab[i]);   // tab[i] retourne la valeur dans le tableau
                                                // à l'index i (0 .. 9)
    }
    return EXIT_SUCCESS;
}