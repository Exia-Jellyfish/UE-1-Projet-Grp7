#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

    void generateHeader(int *modeAffichage, int *nbLedsAllummees, int *LedAllumee)
    {
        FILE* fout = NULL;
        fout = fopen("param.h", "w");   //param.h est un fichier txt qui sera modifié par le programme pour que l'Arduino reconnaisse le mode d'allumage de l'Arduino.
        switch (*modeAffichage)
    {
            case 0:
                {
                fprintf(fout, "int modeAffichage = %d;\n", *modeAffichage);

            break;
                }
            case 1:
                {
                fprintf(fout, "int modeAffichage = %d;\nint nbLedsAllumees = %d;\n", *modeAffichage, *nbLedsAllummees);
                }
            break;

            case 2:
                {
                fprintf(fout, "int modeAffichage = %d;\nint ledAllumee = %d;\n", *modeAffichage, *LedAllumee);
            break;
            }

            case 3:
                {
                fprintf(fout, "int modeAffichage = %d;\nint nbLedsAllumees = %d;\n", *modeAffichage, *nbLedsAllummees);

            break;
                }

            default:
                {

            break;
                }

    }
}
