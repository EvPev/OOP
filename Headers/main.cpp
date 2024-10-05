#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"


int main()
{
    sf::Vector2f size(640,480);
    Game game(size, "RayCaster");
    game.run();
}