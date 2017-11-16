//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"


void lireFichierCSV(struct manipDonnee **arbre)
{
    int time,p;
    char chaine[10]="";
    int i=0;
    struct manipDonnee *t=NULL;

    FILE *f=NULL;
    f= fopen("test.txt","r");



    if (f!=NULL)
    {
        while (fgets(chaine,10,f)!=NULL)
        {
            sscanf(chaine,"%d;%d\n",&time,&p);

            t=transition(time,p);
            ajout(arbre,t,i);


            printf("%d;%d\n",arbre[i]->temps,arbre[i]->poul);
            printf("La transition a ete cree\n");
            printf("la transition a ete ajoutee a l'arbre\n");
            printf("________________________________________\n");


            i+=1;

        }
    }

    else
    {
        printf("Le fichier n'a pu être ouverts");
        fclose(f);
        exit(EXIT_FAILURE);
    }
}
