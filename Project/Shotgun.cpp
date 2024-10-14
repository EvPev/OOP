#include "Shotgun.h"
#include <iostream>
#include <cmath>

// Shotgun Constructor
Shotgun::Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height + 100);
    waitTime = 0;
};

// Destructor
Shotgun::~Shotgun() {}

// Fire function
void Shotgun::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY)  {
    render(window, frameTime);
    // check if shot has hit enemy
    if (abs(eposX - posX) < 3 && abs(eposY - posY) < 3) {
        hit = true;
    }
}


