/**
 * @file: file.c
 * @author: bullydd
 * @brief: Exemple de manipulation des fichiers en C.
 *         DEMONSTRATION USAGE :
 * 
 *         * Création d'un fichier
 *         * Ecriture dans un fichier
 *         * Lecture du contenu d'un fichier
 *         * Suppression d'un fichier
 */
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 
#include <string.h> 

int main(int argc, char* argv[]){

    FILE *ptr = NULL;

    if (argc != 2) {
        printf("Usage : %s FILENAME\n", argv[0]);
        return -1;
    }
  

    ptr = fopen(argv[1], "r");
    if(ptr == NULL) {
        printf("%s doesn\'t exist. Check filename\n", argv[1]);
        return -1;
    }

    char message [100];
    int i = 0;

    printf("Message contains : \n\n");
    while(fgets(message, 100, ptr)){
        printf("Line %d : %s\n", i, message);
        ++i;
    }
    
    // Pour supprimer un fichier 
    if(remove(argv[1]) == 0) {
        printf("Fichier supprimé avec succes.\n");
    }
    else {
        printf("Impossible de supprimer le fichier\n");
        return -1;
    }
    fclose(ptr);
   


    return 0;
}