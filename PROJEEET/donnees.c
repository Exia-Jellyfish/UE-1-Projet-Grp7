//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"


void lireFichierCSV(struct donnee **tabDonnees)
{
    int temps,poul;
    int i=0;
    char tab[TAILLE];

    FILE *f=NULL;
    f= fopen("test.csv","r");



    if (f!=NULL)
    {
        while (fscanf(f,"%d;%d",&temps,&poul)!=NULL)
        {

        }
    }

    else
    {
        fclose(f);
        exit(EXIT_FAILURE);
    }
}
