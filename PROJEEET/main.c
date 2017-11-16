//Importation des biblioth�ques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"



int main(int argc, char *argv[])
{
// Les varaibles
    int choix=0;                            // choix de l'utilisateur csur ce qqu'il veut afficher
    int menu=1;                             // Choix pour l'affichage ou non du menu
    int i ;                                 // compteur
    int nbrLigne=0;

//Les tableaux
    struct manipDonnee *arbre[NBEDONNEES];       // arbre contenant les valeurs plus le lien (facilite le tri)

    for (i=0;i<NBEDONNEES;i++)
    {
        arbre[i]=NULL;
    }                                       // Initialisation de l'arbre.


    lireFichierCSV(arbre);                  // lecture du fichier et mise des valeurs dans un arbre
    do
    {
        choix=afficherMenu();
        while (choix>8)                     // Verification que le choix est correcte
        {
            choix=afficherMenu();
        }


        switch(choix)                       // appelle de la fonction associer au choix fi
        {

            case 1:
                printf("Souhaitez vous egalement avoir le nombre de ligne dans votre programme? \n  1)Oui\n  2)Non\nVotre choix: ");
                scanf("%d",&nbrLigne);
                printf("\n\n");


                afficherFichier(arbre,nbrLigne);
                break;
            /*
            case 2:
                affichageCroissant();
                break;

            case 3:
                affichageDecroissant();
                break;

            case 4:
                recherche();
                break;

            case 5:
                moyennePouls();
                break;

            case 6:
                afficherMax();
                break;

            case 7:
                afficherMin();
                break;
*/
            case 0:
                menu=0;
                return 0;
                break;

            default:
                printf("_______ERRREUR_______\n Etat Impossible\n\n");
                break;

        }
        printf("\nSouhaitez vous avoir d'autres information?\n  0)Non\n  1)Oui\nVotre choix:");
        scanf ("%d",&menu);

    }while(menu!=0);

return 0;
}
