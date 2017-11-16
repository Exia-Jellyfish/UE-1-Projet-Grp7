
#include <stdio.h>
#include <stdlib.h>

//Constante - nombre de donnees dans le fichier au maximum
#define NBEDONNEES 100

#define TAILLE 1000

// Structures

struct donnee {
    int temps;
    int poul;
    struct donnee *next;
};



//Prototypes
void lireFichierCSV(struct donnee **tabDonnees);
