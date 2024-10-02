#include <iostream>
#include <math.h>
#include "Entity.h"


#define PI 3.14159265359;

Entity::Entity(float r, float x, float y) 
{
    body = new sf::CircleShape();
    body->setRadius(r);
    body->setPosition(x,y);
    body->setFillColor(sf::Color::Green);
    body->setOrigin(r/2,r/2);

    a = 0;
    dx = cos(0);
    dy = sin(0);
}

Entity::~Entity() {}

void Entity::move_forward(int speed){
    body->move(-dx,-dy);
}
void Entity::move_backward(int speed){
    body->move(dx,dy);
}
void Entity::turn_left(float speed){
    a -= speed;
    if(a >= 2*3.14159265359) {a = 0;}
    dx = cos(a) * 5;
    dy = sin(a) * 5;
}
void Entity::turn_right(float speed){
    a += speed;
    if(a <= 0) {a = 2 * PI;}
    dx = cos(a) * 5;
    dy = sin(a) * 5;
}
