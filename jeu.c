#include "constantes.h"


void gamertime(SDL_surface* ecran)
{

    SDL_Surface* mario[4] = { NULL }; 
    SDL_Surface* mur = NULL, * caisse = NULL, * caisseOK = NULL, * objectif = NULL, * marioActuel = NULL;


    SDL_Rect position, positionJoueur;
    SDL_Event event;


    // Chargement sprite
    mur = IMG_Load("mur.jpg");
    caisse = IMG_Load("caisse.jpg");
    caisseOK = IMG_Load("caisse_ok.jpg");
    objectif = IMG_Load("objectif.png");
    mario[BAS] = IMG_Load("mario_bas.gif");
    mario[GAUCHE] = IMG_Load("mario_gauche.gif");
    mario[HAUT] = IMG_Load("mario_haut.gif");
    mario[DROITE] = IMG_Load("mario_droite.gif");

    marioActuel = mario[BAS]; // Mario sera vers le bas par défaut 
}