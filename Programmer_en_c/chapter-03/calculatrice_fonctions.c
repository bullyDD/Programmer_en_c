/**
 *  @file: calculatrice_fonctions.c
 *  @author: bullydd
 *  @brief: programme qui simule une calculatrice(addition, soustraction,
    multiplication, division) en utilisant des fonctions.s
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "../math.h"

// ICI : LES DECLARATIONS DES FONCTIONS

void Display(float result, int op, float nb1, float nb2);
void SaisirNumber(float* nb1, float*  nb2);
//float* SaisirAndReturnNumber(void);

// Declarer des fonctions de soustraction, multiplication et division

// PROGRAMME PRINCIPAL

int main(void) {

    // Appel de fonction = usage de la fonction
    printf("\n************* CALCULATRICE *************\n");

    // Variables locales
    bool canQuit = false;
    int choice = 0;
    float nb1 = 0.0, nb2 = 0.0;

    //printf("1.0 + 2.0 = %.2f\n", Addition(1.0, 2.0));

    while(!canQuit) {
        
        printf("\nFaites :\n\n");
        printf("[1]\tAddition\n[2]\tSoustraction\n[3]\tMultiplication\n[4]\tDivision\n[5]\tQuitter\n");

        printf("\n>");
        scanf("%d", &choice);
        printf("\n");

        switch (choice)
        {
            case 1:
                // Addition
                //float *p = SaisirAndReturnNumber();
                //nb1 = *p;
                //nb2 = *(p+1);
                
                SaisirNumber(&nb1, &nb2);

                // Appel de fonction dans un appel de fonction :
                // du moment que l'appel de Addition correspond à la 
                // déclaration de la fonction Display
                Display(Addition(nb1, nb2), choice, nb1, nb2);
                break;
            case 2:
                SaisirNumber(&nb1, &nb2);
                Display(Soustraction(nb1, nb2), choice, nb1, nb2);
                break;
            case 3:
                SaisirNumber(&nb1, &nb2);
                Display(Multiplication(nb1, nb2), choice, nb1, nb2);
                break;
            case 4:
                SaisirNumber(&nb1, &nb2);
                Display(Division(nb1, nb2), choice, nb1, nb2);
                break;
            case 5:
                canQuit = true;
                printf("Fin du programme....\n\n");
                break;
            default:
                printf("Pas d\'operation disponible.Ressayez!\n\n");
                break;
        }
    }
    return 0;
}


void Display(float result, int op, float nb1, float nb2) {
    
    switch (op)
    {
        case 1:
            printf("%.2f + %.2f = %.2f\n", nb1, nb2, result);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", nb1, nb2, result);
            break;
        case 3:
            printf("%.2f x %.2f = %.2f\n", nb1, nb2, result);
            break;
        case 4:
            printf("%.2f / %.2f = %.2f\n", nb1, nb2, result);
            break;
        default:
            break;
    }
}


void SaisirNumber(float* nb1, float*  nb2) {
 
    printf("Entrez nombre 1 : ");
    scanf("%f", nb1);
    printf("\n");
    printf("Entrez nombre 2 : ");
    scanf("%f", nb2);
    printf("\n");

}

/*
float* SaisirAndReturnNumber(void) {
    float numbers[2];

    printf("Entrez nombre 1 : ");scanf("%f", &numbers[0]);printf("\n");
    printf("Entrez nombre 2 : ");scanf("%f", &numbers[1]);printf("\n");

    return numbers;
}
*/