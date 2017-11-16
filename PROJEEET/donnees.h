
#include <stdio.h>
#include <stdlib.h>

//Constante - nombre de donnees dans le fichier au maximum
#define NBEDONNEES 10

#define TAILLE 1000


// Structures
struct manipDonnee {
    int temps;
    int poul;
    struct manipDonnee *next;
};

//Prototypes
void lireFichierCSV(struct manipDonnee **arbre);
