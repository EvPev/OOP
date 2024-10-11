#include "Shotgun.h"
#include <iostream>

Shotgun::Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height + 100);
    waitTime = 0;
};

void Shotgun::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY)  {
    render(window, frameTime);
}



Shotgun::~Shotgun() {}