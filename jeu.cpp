#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

#include "constante.h"
#include "jeu.h"
#include "fichier.h"

using namespace std;

void jouer(sf::RenderWindow *window)
{

    sf::Sprite* mario[4] = { NULL };
	sf::Sprite  mur, caisse, caisseOk, objectif;
	sf::Sprite* AllSprite[6] = {&mur, &caisse, &caisseOk, &objectif };
    sf::Vector2i Position, PositionJoueur;
    



    int niveau[NB_BLOCS_LARGEUR][NB_BLOCS_HAUTEUR] = { 0 };

    // Je charge toute les image possible du niveau
    sf::Texture murTexture;
    if (!murTexture.loadFromFile("mur.jpg"))
    {
        cout << "Mur non chargé";
    }

    sf::Texture caisseTexture;
    if (!caisseTexture.loadFromFile("caisse.jpg"))
    {
        cout << "Caisse non chargé";
    }

    sf::Texture objectifTexture;
    if (!objectifTexture.loadFromFile("objectif.png"))
    {
        cout << "Objectif non chargé";
    }

    sf::Texture caisse_okTexture;
    if (!caisse_okTexture.loadFromFile("caisse_ok.jpg"))
    {
        cout << "Caisse_OK non chargé";
    }
    sf::Texture mario_droiteTexture;
    if (!mario_droiteTexture.loadFromFile("mario_droite.gif"))
    {
        cout << "Mario de droite non chargé";
    }
    sf::Texture mario_gaucheTexture;
    if (!mario_gaucheTexture.loadFromFile("mario_gauche.gif"))
    {
        cout << "Mario de gauche non chargé";
    }
    sf::Texture mario_hautTexture;
    if (!mario_hautTexture.loadFromFile("mario_haut.gif"))
    {
        cout << "Mario de haut non chargé";
    }
    sf::Texture mario_basTexture;
    if (!mario_basTexture.loadFromFile("mario_bas.gif"))
    {
        cout << "Mario de bas non chargé";
    }

    //marioDefault = mario[BAS]; // Je charge un Mario vers le bas par défaut


    if (!LoadNivau(niveau))// Je tente de charger le niveaux et si il échoue alors on ferme tout 
        exit(EXIT_FAILURE);


    for (int i = 0; i < NB_BLOCS_LARGEUR; i++) //on cherche la position de mario sur la map
    {
        for (int j = 0; j < NB_BLOCS_HAUTEUR; j++)
        {
            if (i == Position.x && j == Position.y)
            {
                PositionJoueur.x = i;
                PositionJoueur.y = j;
                niveau[i][j] = VIDE;
            }
        }
    }

		
		for (int largeur = 0; largeur < NB_BLOCS_LARGEUR; largeur++) {
			for (int hauteur = 0; hauteur < NB_BLOCS_HAUTEUR; hauteur++) {
				sf::Sprite* asset = AllSprite[niveau[largeur][hauteur]];
				window->draw(*asset);
			}
		}
		window->display();
}

