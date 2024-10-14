#include "Auto.h"
#include <iostream>

// Constructor
Auto::Auto(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) 
: Weapon(defaultFile, fireFile, screenWidth, screenHeight) {}

// Destructor
Auto::~Auto() {}

// Render function
void Auto::render(sf::RenderWindow& window, double frameTime) {
    // Don't let waitTime get too big
    if (waitTime <= 5) {
    waitTime += frameTime;
    }
    // delay for fire frame to remain for a small time
    if (waitTime < 0) {
        sprite.setTexture(fireFrame);
        // return to default frame
    }else if (waitTime >= 0) {
        sprite.setTexture(defaultFrame);
    }

    // start render function
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (waitTime >= 0.1) {
            sprite.setTexture(fireFrame);
            waitTime = -0.1;
        }
    }
    window.draw(sprite);
}