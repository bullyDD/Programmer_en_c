#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>            // Type de données pour les booléens

int main(void) {

    // Declaration de variable
    int choixMenu = 0;
    bool canQuit = false;

    // 1. Afficher le texte Menu
    printf("\n=== MENU ===\n");


    // 4. Afficher le choix user
    while(canQuit == false) {

        // 2. Afficher les options
        printf("1. Royal cheese\n");
        printf("2. MC Deluxe\n");
        printf("3. MC Beacon\n");
        printf("4. Big Mac\n");
        printf("5. Quitter\n");

        // 3. Demander le choix user
        printf("Votre choix ? ");
        scanf("%d", &choixMenu);
        
        switch (choixMenu)
        {
            case 1:
                printf("Votre choix est Royal cheese\n\n");
                break;
            case 2:
                printf("Votre choix est MC Deluxe\n\n");
                break;
            case 3:
                printf("Votre choix est MC Beacon\n\n");
                break;
            case 4:
                printf("Votre choix est Big Mac\n\n");
                break;
            case 5:
                canQuit = true;
                printf("Bon appetit. Aurevoir!\n\n");
                break;
            default:
                printf("Choix invalid. Veuillez choisir de nouveau\n\n");
                break;
        }


    }
   
    return EXIT_SUCCESS;   
}
