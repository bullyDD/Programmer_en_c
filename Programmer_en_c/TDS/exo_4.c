#include <stdio.h>
#include <stdlib.h>

/*
    Écrire un programme qui détermine 
    si un entier saisi est pair ou impair.
*/
int main(void) {

    int a = 0;
    printf("Veuillez saisir un entier : ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d est un nombre pair\n", a);
    }
    else{
        printf("%d est un nombre impair\n", a);
}
    
    return EXIT_SUCCESS;
}