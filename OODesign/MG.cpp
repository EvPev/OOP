#include "MG.h"
#include "Ray.h"
#include <iostream>

MG::MG(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Auto(defaultFile, fireFile, screenWidth, screenHeight) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition(screenWidth - spriteBounds.width + 250, screenHeight +250 -spriteBounds.height);
};

void MG::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY) {
    render(window, frameTime);
    Ray(posX, posY, dirX, dirY);
}



MG::~MG() {}