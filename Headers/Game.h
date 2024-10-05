#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include "Entity.h"
#include "Player.h"



class Game
{
private:
    sf::RenderWindow* gameWindow;
    Player* player;
public:
    Game(sf::Vector2f size,std::string title);
    void run();
    ~Game();
};

#endif