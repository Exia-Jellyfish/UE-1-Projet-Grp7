#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

void choixMenu(int *modeAffichage, int *nbLedsAllumees, int *ledAllumee)
{
    printf("Bonjour,\nChoisissez les parametres d'affichage de vos Leds :"
                   "\nTapez 0 pour un clignotement au rythme du coeur"
                   "\nTapez 1 pour choisir d'allumer une Led sur X"
                   "\nTapez 2 pour choisir d'allumer une Led que vous choisirez"
                   "\nTapez 3 Pour allumer les Leds en mode chenille\n");
    scanf("%d", modeAffichage);

    switch (modeAffichage)  //On utilise un switch qui est plus flexible qu'un "if"
    {
            {
                /*case 0 clignotement du coeur  aucune valeurs � entrer*/
            }
        case 1:
            while (nbLedsAllumees < 0)
            {
                printf("\nTapez une valeur comprise entre 1 et 10 : ");
                scanf("%d", nbLedsAllumees);
                if (*nbLedsAllumees < 1 || *nbLedsAllumees > 10)   //Le if servire de s�curit� en cas d'erreur dans l'entr�e de valeurs dans chaque cas
                {
                    printf("\Valeur non comprise entre 1 et 10 !\n");
                    nbLedsAllumees = -1;
                }
            }
            break;
        case 2:
            while (ledAllumee < 0)
            {
                printf("\nChoisissez la Led a allumer, entre 0 et 9 : \n");
                scanf("%d", ledAllumee);
                if (*ledAllumee < 0 || *ledAllumee > 9)
                {
                    printf("\nValeur non reconnue\n");
                    ledAllumee = -1;
                }
            }
            break;
        case 3:
            while (nbLedsAllumees < 0)
            {
                printf("\nTapez une valeur comprise entre 1 et 3 : ");
                scanf("%d", nbLedsAllumees);
                if (*nbLedsAllumees < 1 || *nbLedsAllumees > 3)
                {
                    printf("\nVous n'avez pas entre une valeur comprise entre 1 et 3 !\n");
                    *nbLedsAllumees = -1;
                }
            }
            break;
        default:
            break;
    }
}

}

