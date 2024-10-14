#include "Weapon.h"

Weapon::Weapon(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) {
    this->screenHeight = screenHeight;
    this->screenWidth = screenWidth;

    this->defaultFile = defaultFile;
    this->fireFile = fireFile;
    hit = false;

    // Loading the textures
    if (!defaultFrame.loadFromFile(defaultFile)) {
        std::cout << "Failed to load texture" << std::endl;
    }
    if (!fireFrame.loadFromFile(fireFile)) {
        std::cout << "Failed to load texture" << std::endl;
    }
    sprite.setTexture(defaultFrame);
    // Get sprite size
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    // Place sprite in corner
    sprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height);
}

Weapon::~Weapon() {};


// set and get for if the enemy is hit
void Weapon::resetHit() {hit = false;}
bool Weapon::getHit() {return hit;}