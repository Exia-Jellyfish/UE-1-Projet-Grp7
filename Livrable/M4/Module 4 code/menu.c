//Importation des bibliothèques
#include <stdio.h>
#include <stdlib.h>

// Importation des headers
#include "menu.h"
#include "donnees.h"
#include "actions.h"


int afficherMenu()
{
    int choix;


    printf("____________________MENU____________________\n\n");
    printf("Que souhaitez vour savoir sur votre poul ?\n");
    printf("    1)Les donnees enregistrees\n    2)Afficher par ordre croissant vos donnees\n    3)Afficher par ordre decroissant vos donnee\n ");
    printf("   4)Afficher le temps pour un pouls donnee\n    5)Afficher votre poul pour une plage de donnees\n    6)Afficher votre pouls max\n    7)Afficher votre poul min\n\n    0)Vous Quittez l'application\n\n\n");
    printf("Votre choix: ");
    scanf ("%d",&choix);
    printf("\n\n");

    return choix;
}
