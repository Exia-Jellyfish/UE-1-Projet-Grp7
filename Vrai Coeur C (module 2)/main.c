#include <stdio.h>
#include "menu.h"
#include "GenerationCode.h"


int main()
{

    int modeAffichage = -1; //On initialise à -1 les valeurs car 0 correspond à un état des Leds
    int nbLedsAllumees = -1;
    int LedAllumee = -1;
    choixMenu(&modeAffichage, &nbLedsAllumees, &ledAllumee);  //Ouverture de cette fonction contenue dans menu.c
    generateHeader(&modeAffichage, &nbLedsAllumees, &LedAllumee); //Ouverture de cette fonction contenue dans GenerationCode.c
    getchar();

    return 0;
}
