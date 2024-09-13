#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
#include "Player.h"

using namespace sf;

int main()
{
    RenderWindow window(sf::VideoMode(1012, 512), "RayCon");
    CircleShape shape(20,3);
    shape.setFillColor(sf::Color::Yellow);
    shape.setOrigin(Vector2f(5 ,5));
    shape.setPosition(Vector2f(100, 100));
    


    while (window.isOpen())
    {
        window.clear();
        window.draw(shape);
        window.display();

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();


            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {shape.move(Vector2f(1,2));}





        } 
    }

    return 0;

    


}