
#include <stdio.h>
#include <stdlib.h>

//Constante - nombre de donnees dans le fichier au maximum
#define NBEDONNEES 10

#define TAILLE 1000


// Structures
struct manipDonnee {
    int temps;
    int poul;
    struct manipDonnee *next;  // structures de manipulation  de donnees
};

//Prototypes
void lireFichierCSV(struct manipDonnee **arbre); // fonction de lecture de fichier

void afficherFichier(struct manipDonnee **arbre, int nbrLigne); // Fonction pour afficher le fichier

void afficherCroissant(struct manipDonnee **arbre, int controle); // Fonction pour afficher le resultat de  la fonction de tri

void afficherDecroissant(struct manipDonnee **arbre, int controle); // Fonction pour afficher le resultat de la fonction de tri
