/**
 *  Écrire un programme se comportant comme une calculatrice, c’est à dire
    exécutant une boucle sur :
    ● Lecture de l’opérateur mathématique
    ● Lecture de deux nombres réels a et b
    ● Calcul de la valeur
    ● Affichage du résultat à l’écran
    Le programme demandera à l’utilisateur de sélectionner une option pour quitter la calculatric
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    bool canQuit = false;
    int operator = 0;

    printf("************** CALCULATRICE *****************\n");

    while(canQuit != true) {

        printf("\nFaites : \n\n");
        printf("[1]\t Addition\n[2]\t Soustraction\n[3]\t Multiplication\n[4]\t Division\n[5]\t Quitter\n\n");
        printf(">");scanf("%d", &operator);

        float nb1 = 0.0, nb2 = 0.0;
        float result = 0.0;

        printf("Entrez nombre 1 :");scanf("%f", &nb1);printf("\n");
        printf("Entrez nombre 2 : ");scanf("%f", &nb2);printf("\n");

        switch (operator)
        {
        case 1:
            /* Addition */
            result = nb1 + nb2;

            printf("%f + %f = %f\n", result);
            break;
        case 2:
            /* Soustraction */
            result = nb1 - nb2;
            break;
        case 3:
            /* Multiplication */
            result = nb1 * nb2;
            break;
            
        case 4:
            /* Divison */
            result = nb1 / nb2;
            break;
        case 5:
            canQuit = true;
            break;
        default:
            printf("Pas d'operation disponible. Veuillez reprendre!\n");
            break;
        }
    }

    
    return EXIT_SUCCESS;
}