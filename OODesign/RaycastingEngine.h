#ifndef RAYCASTINGENGINE_H
#define RAYCASTINGENGINE_H

#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Ray.h"
#include "Map.h"


class RaycastingEngine {
public:
    RaycastingEngine(Player& player);

    void render(sf::RenderWindow& window, const int worldMap[24][24]);

private:
    Player& player;
};

#endif
