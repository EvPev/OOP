#include "MG.h"
#include "Ray.h"
#include <iostream>

// Constructor
MG::MG(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Auto(defaultFile, fireFile, screenWidth, screenHeight) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition(screenWidth - spriteBounds.width + 250, screenHeight +250 -spriteBounds.height);
};

// Firing and rendering function
void MG::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY) {
    render(window, frameTime);
    // check if shot has hit enemy
    if (abs(eposX - posX) < 5 && abs(eposY - posY) < 5) {
        hit = true;
    }
}



MG::~MG() {}