#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>


#include "constante.h"
#include "fichiers.h"


int LoadNivau(int niveau[][NB_BLOCS_HAUTEUR])
{
    FILE* fichier = NULL;
    char lignefichier[NB_BLOCS_LARGEUR * NB_BLOCS_HAUTEUR + 1] = { 0 };
    int i = 0, j = 0;

    fichier = fopen("niveaux.lvl", "r");
    if (fichier == 0)
        return 0;

    fgets(lignefichier, NB_BLOCS_LARGEUR * NB_BLOCS_HAUTEUR + 1, fichier);

    for (i = 0; i < NB_BLOCS_LARGEUR; i++)
    {
        for (j = 0; j < NB_BLOCS_HAUTEUR; j++)
        {
            switch (ligneFichier[(i * NB_BLOCS_LARGEUR) + j])
            {
            case '0':
                niveau[j][i] = 0;
                break;
            case '1':
                niveau[j][i] = 1;
                break;
            case '2':
                niveau[j][i] = 2;
                break;
            case '3':
                niveau[j][i] = 3;
                break;
            case '4':
                niveau[j][i] = 4;
                break;
            }
        }

        

    }

    fclose(fichier);
    return 1;

}




int SaveNivau(int niveau[][NB_BLOCS_HAUTEUR])
{
    FILE* fichier = 0;
    int i = 0, j = 0;

    fichier = fopen("niveaux.lvl", "w");
    if (fichier == 0)
        return 0;

    for (i = 0; i < NB_BLOCS_LARGEUR; i++)
    {
        for (j = 0; j < NB_BLOCS_HAUTEUR; j++)
        {
            fprintf(fichier, "%d", niveau[i][j]);
        }
    }

    fclose(fichier);
    return 1;

}