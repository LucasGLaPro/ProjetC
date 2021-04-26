#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{

    sf::RenderWindow window(sf::VideoMode(1000, 500), "SFML ");

    sf::Image image;
    if (!(image.loadFromFile("mario3.png")))
        std::cout << "Cannot load image";   //Load Image

    sf::Texture texture;
    texture.loadFromImage(image);  //Load Texture from image

    sf::Sprite sprite;
    sprite.setTexture(texture);


    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

        }//Event handling done


        for (int i = 0; i < 1280; i++)
        {
            for (int j = 0; j < 720; j++)
                image.setPixel(i, j, sf::Color::Black);
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }


    return 0;
}
