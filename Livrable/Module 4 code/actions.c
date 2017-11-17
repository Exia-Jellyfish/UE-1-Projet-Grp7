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

void triCroissant(struct manipDonnee **arbre)
{
    int i,k;
    struct manipDonnee *tmp;

    for(k=0;k<10;k++)
        {
           for(i=1;i<10;i++)
            {
                if (arbre[i-1]->poul>arbre[i]->poul)
                {
                    tmp=arbre[i];
                    arbre[i]=arbre[i-1];
                    arbre[i-1]=tmp;
                }
            }
        }
}


void triDeroissantPouls(struct manipDonnee**arbre)
{
    int i,k;
    struct manipDonnee *tmp;

    for(k=0;k<10;k++)
        {
           for(i=1;i<10;i++)
            {
                if (arbre[i-1]->poul<arbre[i]->poul)
                {
                    tmp=arbre[i];
                    arbre[i]=arbre[i-1];
                    arbre[i-1]=tmp;
                }
            }
        }
}

void triDeroissantTemps(struct manipDonnee**arbre)
{
    int i,k;
    struct manipDonnee *tmp;

    for(k=0;k<10;k++)
        {
           for(i=1;i<10;i++)
            {
                if (arbre[i-1]->temps<arbre[i]->temps)
                {
                    tmp=arbre[i];
                    arbre[i]=arbre[i-1];
                    arbre[i-1]=tmp;
                }
            }
        }
}

void  afficherMax(struct manipDonnee **arbre)
{
    struct manipDonnee *tmp1;
    int i;
    tmp1=arbre[0];
    for(i=0;i<10;i++)
    {
        if (tmp1->poul<arbre[i]->poul)
        {
            tmp1=arbre[i];
        }
    }
    printf("le pouls maximum de vos donnees est: %d",tmp1->poul);
}

void  afficherMin(struct manipDonnee **arbre)
{
    struct manipDonnee *tmp1;
    int i;
    tmp1=arbre[0];
    for(i=0;i<10;i++)
    {
        if (tmp1->poul>arbre[i]->poul)
        {
            tmp1=arbre[i];
        }
    }
    printf("le pouls minimal de vos donnees est: %d",tmp1->poul);
}
