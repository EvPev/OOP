#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "Entity.h"
#include "Player.h"

int main()
{
    sf::Vector2f size(1200,500);
    Game game(size, "RayCaster");
    game.run();
}