#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
#include <SFML/Graphics.hpp>

class Entity
{
    protected:
        // Entity position
        float x;
        float y;
        // Entity angle
        float dx;
        float dy;
        float a;


        sf::CircleShape* body;
        
    
    public:
        Entity(float r, float x, float y);
        ~Entity();

        void draw(sf::RenderWindow* gameWindow) {
            gameWindow->draw(*body);
        }


        void move_forward(int speed);
        void move_backward(int speed);
        void turn_left(float speed);
        void turn_right(float speed);
};

#endif
