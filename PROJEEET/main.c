
//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "données.h"
#include "actions.h"



int main(int argc, char *argv[])
{
// Les varaibles
    int choix=0;                            // choix de l'utilisateur csur ce qqu'il veut afficher

//Les tableaux
    struct donnees *tableauDonnees;         //tableau qui contiendra les lignes du fichier csv

//Les fichiers
    FILE *f=NULL;


    f= fopen(NOMFICHIER,"r");
    if (f!=NULL)                            // Vérification de l'ouverture du fichier
    {
        lireFichierCSV(tableauDonnees,f);   // lecture du fichier et mise des valeurs dans un tableau
    }
    else
    {
        fclose(f);
        exit(EXIT_FAILURE);
    }
    fclose(f);

    while (choix<=0 || choix>??)            // Verification que le choix est correcte
    {
        choix=aficherMenu();
    }

    switch(choix)                           // appelle de la fonction associer au choix fi
    {
        case 1:

        case 2:

        case 3:

        case 4:

        case 5:

        case 6:

        case 7:

        case 8:

        case default:
            printf("_______ERRREUR_______\n Etat Impossible");
            break;

    }

    return 0;
}
