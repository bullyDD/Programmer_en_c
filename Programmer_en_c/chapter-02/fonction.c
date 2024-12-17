#include <stdio.h>
#include <stdlib.h>

// ICI : LES DECLARATIONS DES FONCTIONS
float Addition(float nb1, float nb2);

// Declarer des fonctions de soustraction, multiplication et division

// PROGRAMME PRINCIPAL

int main(void) {

    // Appel de fonction = usage de la fonction
    printf("1.0 + 2.0 = %.2f\n", Addition(1.0, 2.0));

    return 0;
}


//  DEFINITION DES FONCTIONS
float Addition(float nb1, float nb2) {
    return nb1 + nb2;
}

