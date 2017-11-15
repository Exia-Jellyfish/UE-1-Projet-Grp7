#include <stdio.h>
#include "menu.h"
#include "GenerationCode.h"


int main()
{

    int modeAffichage = -1; //On utilise
    int nbLedsAllumees = -1;
    int LedAllumee = -1;
    choixMenu(&modeAffichage, &nbLedsAllumees, &ledAllumee);
    generateHeader(&modeAffichage, &nbLedsAllumees, &LedAllumee);
    getchar();

    return 0;
}
