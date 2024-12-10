/*
    Ecrire un programme qui affiche les codes ASCII des lettres et des chiffres sous
    la forme suivante :

    caractère = A code = 65 code hexa = 41
    caractère = B code = 66 code hexa = 42
    ….
    caractère = 1 code = 49 code hexa = 31
    …
    caractère = 9 code = 57 code hexa = 39    
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    for (char c = 'A'; c <= 'Z'; c++)  {
        // char temp = c + 32; Pour l'affichage des minuscules
        printf("caractere = %c\t code = %d\t hexa = %x\n", c, c, c);
    }

    return EXIT_SUCCESS;
}