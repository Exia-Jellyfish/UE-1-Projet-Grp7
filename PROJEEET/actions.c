//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"


struct manipDonnee *transition(int t, int p)
{
  struct manipDonnee *a=NULL;
  a=malloc(sizeof(struct manipDonnee));
  a->temps=t;
  a->poul=p;
  a->next=NULL;

  return a;
}


void ajout(struct manipDonnee **arbre , struct manipDonnee *t ,int i)
{
    t->next=arbre[i];
    arbre[i]=t;
}
