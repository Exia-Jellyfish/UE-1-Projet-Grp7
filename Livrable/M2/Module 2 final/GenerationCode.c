#include <stdio.h>
#include <stdlib.h>
#include "GenerationCode.h"

    void generateHeader(int *modeAffichage, int *nbLedsAllummees, int *LedAllumee)
    {
        FILE* fout = NULL;
        fout = fopen("C:\\Users\\louka\\Documents\\Docs Exia\\PROJEEET 1\\UE-1-Projet-Grp7\\Livrable\\M2\\Module 2 final\\Coeur.c_Arduino\\param.h", "w");   //param.h est un fichier txt qui sera modifié par le programme pour que l'Arduino reconnaisse le mode d'allumage de l'Arduino.
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
