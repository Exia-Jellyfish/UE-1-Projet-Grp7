#include <stdio.h>
#include "menu.c"
#include "GenerationCode.c"


int main()
{

    int modeAffichage = -1; //On initialise a -1 les valeurs car 0 correspond a un etat des Leds
    int nbLedsAllumees = -1;
    int LedAllumee = -1;
    int LedsAllumees = -1;
    choixMenu(&modeAffichage, &nbLedsAllumees, &LedsAllumees, &LedAllumee);        //Ouverture de cette fonction contenue dans menu.c
    generateHeader(&modeAffichage, &nbLedsAllumees, &LedsAllumees, &LedAllumee);   //Ouverture de cette fonction contenue dans GenerationCode.c
    getchar();

    return 0;
}
