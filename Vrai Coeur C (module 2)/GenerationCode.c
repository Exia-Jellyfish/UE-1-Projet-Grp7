#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

    void generateHeader(int *modeAffichage, int *nbLedsAllummees, int *ledAllumee)
    {

        FILE fout = NULL;
        fout = fopen("param.h", "w");   //param.h est un fichier txt qui sera modifié par le programme pour que l'Arduino reconnaisse le mode d'allumage de l'Arduino.
        switch (modeAffichage)
    {
            case 0:
                fprintf(fout, "Le mode d'affichage est le %d; soit clignotement du coeur\n", *modeAffichage);
            break;

            case 1:
                fprintf(fout, "Le mode d'affichage est le %d; soit 1 Led sur X\nX a pour valeur : %d;\n", *modeAffichage, *nbLedsAllummees);
            break;

            case 2:
                fprintf(fout, "Le mode d'affichage est le %d; soit 1 Led allumee de votre choix (numero %d;)\n", *modeAffichage, *ledAllumee);
            break;

            case 3:
                fprintf(fout, "Le mode d'affichage est le %d; soit l'allumage en chenille avec %d; Leds à la fois\n", *modeAffichage, *nbLedsAllummees);
            break;

            default:

            break;

    }
}
