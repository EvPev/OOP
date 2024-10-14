#include "Semi.h"
#include <iostream>

// Constructor
Semi::Semi(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) 
: Weapon(defaultFile, fireFile, screenWidth, screenHeight) {}

// Destructor
Semi::~Semi() {}

// Render function
void Semi::render(sf::RenderWindow& window, double frameTime) {
    // Don't allow waitTime to get to big
    if (waitTime <= 5) {
    waitTime += frameTime;
    }
    // delay for frame time to remain for a time
    if (waitTime < 0) {
        sprite.setTexture(fireFrame);
    // set back to default frame
    }else if (waitTime >= 0) {
        sprite.setTexture(defaultFrame);
    }

    // start render function
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        if (waitTime >= 1) {
            sprite.setTexture(fireFrame);
            waitTime = -0.2;
        }
    }
    window.draw(sprite);
}