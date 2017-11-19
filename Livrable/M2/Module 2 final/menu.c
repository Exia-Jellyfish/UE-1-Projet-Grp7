#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

void choixMenu(int *modeAffichage, int *nbLedsAllumees,int *LedsAllumees, int *ledAllumee)
{
    printf("Bonjour,\nChoisissez les parametres d'affichage de vos Leds :"
                   "\nTapez 0 pour un clignotement au rythme du coeur"
                   "\nTapez 1 pour choisir d'allumer une Led sur X"
                   "\nTapez 3 Pour allumer les Leds en mode chenille\n");
    scanf("%d", modeAffichage);

    switch (*modeAffichage)  //On utilise un switch qui est plus flexible qu'un "if"
    {
            {
                /*case 0 clignotement du coeur  aucune valeurs à entrer*/
            }
        case 1:
            {
                printf("\nTapez une valeur comprise entre 1 et 10 : ");
                scanf("%d", nbLedsAllumees);
                    switch (*nbLedsAllumees)
                    {
                        case 2 :
                            {
                                *LedsAllumees = 3;
                            }
                            break;
                        case 3 :
                            {
                                *LedsAllumees = 4;
                            }
                            break;
                        case 4 :
                            {
                                *LedsAllumees = 5;
                            }
                            break;
                        case 5 :
                            {
                                *LedsAllumees = 6;
                            }
                            break;
                        case 6 :
                            {
                                *LedsAllumees = 7;
                            }
                            break;
                        case 7 :
                            {
                                *LedsAllumees = 8;
                            }
                        case 8 :
                            {
                                *LedsAllumees = 9;
                            }
                            break;
                        case 9 :
                            {
                                *LedsAllumees = 10;
                            }
                            break;
                        case 10 :
                            {
                                *LedsAllumees = 11;
                            }
                            break;
                    }

            }
            break;
        case 2:
            {
                printf("\nChoisissez la Led a allumer, entre 0 et 9 : \n");
                scanf("%d", ledAllumee);
                if (*ledAllumee < 0 || *ledAllumee > 9)
                {
                    printf("\nValeur non reconnue\n");
                    *ledAllumee = -1;
                }

            }
            break;
        case 3:
            {
            }
            break;
        default:
            break;
    }
}


