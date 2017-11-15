//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"


void lireFichierCSV(struct donnee **arbre)
{
    int temps,poul;
    char tab[TAILLE];

    FILE *f=NULL;
    f= fopen("test.csv","r");



    if (f!=NULL)
    {
        while (fscanf(f,"%s;%s",)!=NULL)
        {

        }
    }

    else
    {
        fclose(f);
        exit(EXIT_FAILURE);
    }
}
