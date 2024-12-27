#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 
#include <string.h> 


// Types de données globales

// Déclaration d'un type de donnée Ordinateur
struct Ordinateur {
    int price;
    int RAM;
    int capacity;
    bool SSD;
    bool dedicate_GPU;
    char brand[20];
 };


struct Module {
    char name[5];
    float note;
    int coef;
};


struct Bulletin {
    struct Module m1;
    struct Module m2;
    char mention[20];
};

 struct Etudiant
 {
    char prenom[20];
    char nom[20];
    int age;
    long matricule;
    struct Bulletin bill;
 };
 


int main(int argc, char* argv[]) {

    /* 
        Déclaration d'objets de type Etudiant, Bulletin et Module
        Ceci permet d'assigner des objets directement aux composantes
        de l'objet de type Etudiant. 
        Cette approche peut etre plus intuitive pour certains.
    */
    struct Etudiant seynabou;
    struct Bulletin bill1;
    struct Module m, m2;


    // Objet module
    strcpy(m.name, "Maths");
    m.note = 0.0;
    m.coef = 4;

    strcpy(m2.name, "Prog C");
    m2.note = 0.0;
    m2.coef = 3;


    // Objet bulletin
    bill1.m1 = m;
    bill1.m2 = m2;

    // Object etudiant
    strcpy(seynabou.nom, "SARR");
    strcpy(seynabou.prenom, "SEYNABOU");
    seynabou.age = 10;
    seynabou.matricule = 234994;
    
    /*
        La deuxieme approche consiste à utiliser l'opérateur d'accès '.'
        pour atteindre la composante de l'objet recherché afin de lui 
        attribuer une valeur. Tant le type de la composant est different
        des types de base (int, float, double, bool, etc ..) on continu de
        descendre de la hiérachie.
    */

    //strcpy(seynabou.bill.m1.name, "Maths");

    seynabou.bill = bill1;

    printf("*********Etudiant**********\n"
    "Name: %s\n"
    "Prenom: %s\n"
    "Age : %d\n"
    "Matricule:%ld\n\n"
    "*****Bulletin*****\n"
    "Module 1 :\n"
    "name: %s\n"
    "coef: %d\n"
    "note: %.2f\n", seynabou.nom, seynabou.prenom, seynabou.age, seynabou.matricule,
    seynabou.bill.m1.name, seynabou.bill.m1.coef, seynabou.bill.m1.note);


    return 0;
}
