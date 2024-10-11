#include "Auto.h"
#include <iostream>

// Constructor
Auto::Auto(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) 
: Weapon(defaultFile, fireFile, screenWidth, screenHeight) {}

Auto::~Auto() {}

void Auto::render(sf::RenderWindow& window, double frameTime) {
    if (waitTime <= 5) {
    waitTime += frameTime;
    }
    if (waitTime < 0) {
        sprite.setTexture(fireFrame);
    }else if (waitTime >= 0) {
        sprite.setTexture(defaultFrame);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (waitTime >= 0.1) {
            sprite.setTexture(fireFrame);
            waitTime = -0.1;
        }
    }
    window.draw(sprite);
}