#include "Semi.h"
#include <iostream>

// Constructor
Semi::Semi(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) 
: Weapon(defaultFile, fireFile, screenWidth, screenHeight) {}

Semi::~Semi() {}

void Semi::render(sf::RenderWindow& window, double frameTime) {
    if (waitTime <= 5) {
    waitTime += frameTime;
    }
    if (waitTime < 0) {
        sprite.setTexture(fireFrame);
    }else if (waitTime >= 0) {
        sprite.setTexture(defaultFrame);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (waitTime >= 1) {
            sprite.setTexture(fireFrame);
            waitTime = -0.2;
        }
    }
    window.draw(sprite);
}