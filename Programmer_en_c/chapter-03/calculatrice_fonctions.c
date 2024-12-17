/**
 *  @file: calculatrice_fonctions.c
 *  @author: bullydd
 *  @brief: programme qui simule une calculatrice(addition, soustraction,
    multiplication, division) en utilisant des fonctions.s
*/

#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

// ICI : LES DECLARATIONS DES FONCTIONS

float Addition(float nb1, float nb2);
float Soustraction(float nb1, float nb2);
float Multiplication(float nb1, float nb2);
float Division(float nb1, float nb2);
void Display(float result, int op, float nb1, float nb2);
float* SaisirNumber(void);

// Declarer des fonctions de soustraction, multiplication et division

// PROGRAMME PRINCIPAL

int main(void) {

    // Appel de fonction = usage de la fonction
    printf("\n************* CALCULATRICE *************\n");

    printf("\nFaites :\n\n");
    printf("[1]\tAddition\n[2]\tSoustraction\n[3]\tMultiplication\n[4]\tDivision\n[5]\tQuitter\n");

    // Variables locales
    bool canQuit = false;
    int choice = 0;
    float nb1 = 0.0, nb2 = 0.0;

    //printf("1.0 + 2.0 = %.2f\n", Addition(1.0, 2.0));

    while(!canQuit) {
        
        printf(">");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                // Addition

                printf("Entrez nombre 1 : ");
                scanf("%f", &nb1);
                printf("Entrez nombre 2 : ");
                scanf("%f", &nb2);

                // Appel à la fonction
                Display(Addition(nb1, nb2), choice, nb1, nb2);

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                canQuit = true;
                break;
            default:
                break;
        }
    }
    return 0;
}


//  DEFINITION DES FONCTIONS
float Addition(float nb1, float nb2) {
    return nb1 + nb2;
}


void Display(float result, int op, float nb1, float nb2) {
    
    switch (op)
    {
        case 1:
            printf("%.2f + %.2f = %.2f\n", nb1, nb2, result);
            break;
        
        default:
            break;
    }
}


float* SaisirNumber(void) {
    
}