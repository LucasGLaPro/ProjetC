#include <SFML/Graphics.hpp>
#include <iostream>


int main()
{
    int x = 190;
    int y = 30;
    sf::RenderWindow window(sf::VideoMode(407, 406), "Mario SOKOBAN Lucas et Gregory ");

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

            if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Escape)
                {
                    window.close();
                }
                if (event.key.code == sf::Keyboard::Q || event.key.code == sf::Keyboard::Num1)
                {

                    sprite2.setPosition(x = x-10, y);
                }
                if (event.key.code == sf::Keyboard::D || event.key.code == sf::Keyboard::Num1)
                {

                    sprite2.setPosition(x = x + 10, y);
                }
                if (event.key.code == sf::Keyboard::S || event.key.code == sf::Keyboard::Num1)
                {

                    sprite2.setPosition(x, y=y+10);
                }
                if (event.key.code == sf::Keyboard::Z || event.key.code == sf::Keyboard::Num1)
                {

                    sprite2.setPosition(x, y=y-10);
                }
            }
        }//Event handling done


        window.clear();
        window.draw(sprite);
        window.draw(sprite2);
        sprite2.setPosition(x, y);
        window.display();

    }


    return 0;
}
