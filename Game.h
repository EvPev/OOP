#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"


class Game
{
private:
    sf::RenderWindow* gameWindow;
    Entity* player;
public:
    Game(sf::Vector2f size,std::string title);
    void run();
    ~Game();
};

#endif