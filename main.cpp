
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <fstream>


#include "constante.h"
#include "jeu.h"
#include "fichier.h"




int main()
{
	using namespace std;

	sf::RenderWindow window(sf::VideoMode(LARGEUR_FENETRE, HAUTEUR_FENETRE), "Mario Sokoban");
	

	sf::Texture texture;
	if (!texture.loadFromFile("menu.jpg"))
	{
		cout << "Image du menu principale non chargé";
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);

	
	while (window.isOpen())
	{

		//Event pour naviguer entre les options
		sf::Event event;

		
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
				{
					window.close();
				}
				if (event.key.code == sf::Keyboard::Numpad1 || event.key.code == sf::Keyboard::Num1) 
				{
					
					jouer(&window);
				}
				
			}
		}
		window.draw(sprite);
		window.display();
	}
	return 0;
}