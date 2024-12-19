#include <stdio.h>
#include <stdlib.h>

// Declaration
void echange(int* a, int* b);

int main(void) {
    int a = 100;
    int b = 10;

    printf("Avant echange\n");
    printf("A = %d, b = %d\n", a, b);

    // Appel de fonction
    echange(&a, &b);

    printf("Apres echange\n");
    printf("A = %d, b = %d\n", a, b);

    return EXIT_SUCCESS;
}

// Definition
void echange(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}