#include <stdio.h>
#include <stdlib.h>

struct manipDonnee *transition(int t, int p); // creer un nouveau bloc

void ajout(struct manipDonnee **arbre , struct manipDonnee *t ,int i); // ajouter le bloc a la liste chainee

void triCroissant(struct manipDonnee**arbre); // fonction de tri

void triDeroissantPouls(struct manipDonnee**arbre);// fonction de tri

void triDeroissantTemps(struct manipDonnee**arbre);// fonction de tri

void afficherMax(struct manipDonnee **arbre); // Fonction dde recherche

void  afficherMin(struct manipDonnee **arbre); // Fonction de recherche

void  afficherMin(struct manipDonnee **arbre); // Fonction de recherche

void recherche(struct manipDonnee **arbre,int pouls,int val); // recherche
