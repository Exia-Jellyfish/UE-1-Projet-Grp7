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
    int ref=1;
    int pouls=0;
    int val=0;

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


            case 2:
                printf("Voulez vous triez selon le temps (1) ou selon le pouls (2) ?\nVotre reponse: ");
                scanf("%d",&ref);
                afficherCroissant(arbre,ref);
                break;


            case 3:
                printf("Voulez vous triez selon le temps (1) ou selon le pouls (2) ?\nVotre reponse: ");
                scanf("%d",&ref);
                afficherDecroissant(arbre,ref);
                break;

            case 4:
                printf("Souhaitez vous afficher tous les pouls au dessus d'une valeur particuliere?\n 1) oui\n 2) non\nVotre reponse:");
                scanf("%d",&val);
                printf("Veuillez entrer la valeur du pouls de reference: ");
                scanf("%d",&pouls);
                recherche(arbre,pouls,val);
                break;
            /*
            case 5:
                moyennePouls();
                break;
            */
            case 6:
                afficherMax(arbre);
                break;

            case 7:
                afficherMin(arbre);
                break;

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
