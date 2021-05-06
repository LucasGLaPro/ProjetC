#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

#include "constantes.h"
#include "jeu.h"


void jouer(sf::RenderWindow *window)
{
    sf::RenderWindow window{ sf::VideoMode(800, 600), "Ecran" };

    sf::Sprite* mario[4] = { NULL };
    sf::Sprite* mur = NULL, * caisse = NULL, * caisseOK = NULL, * objectif = NULL, * marioActuel = NULL;
    SDL_Rect position, positionJoueur;
    sf::Event event;

    int niveau[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR] = { 0 };

    // Je charge toute les image possible du niveau
    sf::Texture mur;
    if (!texture.loadFromFile("mur.jpg"))
    {
        cout << "Mur non chargé";
    }

    sf::Texture caisse;
    if (!texture.loadFromFile("caisse.jpg"))
    {
        cout << "Caisse non chargé";
    }

    sf::Texture objectif;
    if (!texture.loadFromFile("objectif.png"))
    {
        cout << "Objectif non chargé";
    }

    sf::Texture caisse_ok;
    if (!texture.loadFromFile("caisse_ok.jpg"))
    {
        cout << "Caisse_OK non chargé";
    }
    sf::Texture mario_droite;
    if (!texture.loadFromFile("mario_droite.gif"))
    {
        cout << "Mario de droite non chargé";
    }
    sf::Texture mario_gauche;
    if (!texture.loadFromFile("mario_gauche.gif"))
    {
        cout << "Mario de gauche non chargé";
    }
    sf::Texture mario_haut;
    if (!texture.loadFromFile("mario_haut.gif"))
    {
        cout << "Mario de haut non chargé";
    }
    sf::Texture mario_bas;
    if (!texture.loadFromFile("mario_bas.gif"))
    {
        cout << "Mario de bas non chargé";
    }

    marioDefault = mario[BAS]; // Je charge un Mario vers le bas par défaut


    if (!chargerNiveau(niveau))// Je tente de charger le niveaux et si il échoue alors on ferme tout 
        exit(EXIT_FAILURE);


    for (i = 0; i < NB_BLOCS_LARGEUR; i++) //on cherche la position de mario sur la map
    {
        for (j = 0; j < NB_BLOCS_HAUTEUR; j++)
        {
            if (niveau[i][j] == mario)
            {
                positionJoueur.x = i;
                positionJoueur.y = j;
                niveau[i][j] = VIDE;
            }
        }
    }
}