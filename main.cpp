#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{

    sf::RenderWindow window(sf::VideoMode(407, 406), "SFML ");

    sf::Texture Texture;
    if (!(Texture.loadFromFile("mario.jpg")))
        std::cout << "Cannot load image";   //Load Image


    sf::Sprite sprite;
    sprite.setTexture(Texture);


    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }//Event handling done


        window.clear();
        window.draw(sprite);
        window.display();
    }


    return 0;
}
