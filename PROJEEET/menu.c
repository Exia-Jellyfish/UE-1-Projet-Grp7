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


    printf("__________MENU__________\n\n");
    printf("Que souhaitez vour savoir sur votre poul ?\n 1)Les donnees enregistrees\n 2)Afficher par ordre croissant vos donnees\n 3)Afficher par ordre décroissant vos donnee\n 4)Afficher une donnees pour un temps donnee\n 5)Afficher votre poul pour une plage de donnees\n 6)Afficher votre pouls max\n 7)Afficher votre poul min\n\n 0)Vous Quittez l'application\n\n\n Votre choix: ");

    scanf ("%d",&choix);

    return choix;
}
