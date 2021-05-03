#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

#include "constantes.h"
#include ""


void jouer(SDL_surface* ecran)
{

    SDL_Surface* mario[4] = { NULL };
    SDL_Surface* mur = NULL, * caisse = NULL, * caisseOK = NULL, * objectif = NULL, * marioActuel = NULL;


    SDL_Rect position, positionJoueur;
    SDL_Event event;


    // Chargement sprite
    mur = IMG_Load("mur.png");
    caisse = IMG_Load("caisse.jpg");
    caisseOK = IMG_Load("caisse_ok.jpg");
    objectif = IMG_Load("objectif.png");
    mario[BAS] = IMG_Load("mario_bas.gif");
    mario[GAUCHE] = IMG_Load("mario_gauche.gif");
    mario[HAUT] = IMG_Load("mario_haut.gif");
    mario[DROITE] = IMG_Load("mario_droite.gif");

    marioActuel = mario[BAS]; // Mario sera vers le bas par défaut 

    for (i = 0; i < NB_BLOCS_LARGEUR; i++) //oncherche la position de mario sur la map
    {
        for (j = 0; j < NB_BLOCS_HAUTEUR; j++)
        {
            if (carte[i][j] == marioactuel)
            {
                positionJoueur.x = i;
                positionJoueur.y = j;
            }
        }
    }
}