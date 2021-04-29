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


    sf::Texture mario;
    if (!(mario.loadFromFile("mario8bit.png")))
        std::cout << "Cannot load image";   //Load Image


    sf::Sprite sprite2;
    sprite2.setTexture(mario);

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
        window.draw(sprite2);
        sprite2.setPosition(190, 30);

        window.display();

    }


    return 0;
}
