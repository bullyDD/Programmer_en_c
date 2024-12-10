/*
    Écrire un programme qui simule l’opération de la division entière entre deux
    entiers positifs a et b. Les deux nombres a et b sont saisis au clavier. 
    On divise le plus grand par le plus petit, sans utiliser l’opérateur /. Afficher le quotient et le reste..

    Dans cet exercice ce qui est introduit :

    1. Expression ternaire
    ----------------------

    L’opérateur conditionnel ou opérateur ternaire est un opérateur particulier dont le résultat dépend 
    de la réalisation d’une condition. 

    Son deuxième nom lui vient du fait qu’il est le seul opérateur du langage C à requérir trois opérandes : 
        une condition et deux expressions.

    Syntaxe d'une expression ternaire

    (condition) ? expression si vrai : expression si faux
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {

    int a = 0, b = 0, quotient = 0, reste = 0;

    // Nous permet d'attraper les erreurs de saisie. Ainsi on évite les 
    // erreurs dans le calcul.

    while (a <= 0 || b <= 0){

        printf("Veuillez saisir deux entiers positifs\n");
        printf("Entrer nombre 1 : ");scanf("%d", &a);printf("\n");
        printf("Entrer nombre 2 : ");scanf("%d", &b);printf("\n");
    }

    // Expression ternaire
    //char* msg = (a <= 0 || b <= 0) ? "\na et b doivent etre positifs\n" : "\na et b sont positifs\n";
    
    //printf("%s\n", msg);

    // Trouver le plus grand d   
    //printf("%s\n", msg);ès deux nombres
    int max = (a > b) ? a : b;
    int min = (a > b) ? b : a;

    // Simulation de division
    reste = max;

    // La boucle doit toujours s'exécuter tant que le reste est sup à min
    while (reste >= min) {
        // Le reste est calculer en faisant une simple soustractio,
        reste -= min;

        // On increment le quotient tant que le reste est sup à min.
        quotient ++;
    }

    // Affichage
    printf("\nMax = %d\n", max);
    printf("Min = %d\n", min);
    printf("Quotient = %d\n", quotient);
    printf("Reste = %d\n", reste);

    return EXIT_SUCCESS;
}