#include "math.h"
#include <assert.h>

//  DEFINITION DES FONCTIONS
float Addition(float nb1, float nb2) {
    return nb1 + nb2;
}

float Soustraction (float nb1, float nb2) {
    return nb1 - nb2;
}

float Multiplication (float nb1, float nb2) {
    return nb1 * nb2;
}

float Division(float nb1, float nb2) {

    // Macro assert permet de vérifier une expression : 
    // Est ce que nb2 est different de zero
    assert(nb2 != 0);

    return nb1 / nb2;
}