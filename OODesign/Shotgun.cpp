#include "Shotgun.h"
#include <iostream>


Shotgun::Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) {
    this->screenHeight = screenHeight;
    this->screenWidth = screenWidth;

    this->defaultFile = defaultFile;
    this->fireFile = fireFile;

    // Loading the textures
    if (!defaultFrame.loadFromFile(defaultFile)) {
        std::cout << "Failed to load texture" << std::endl;
    }
    if (!fireFrame.loadFromFile(fireFile)) {
        std::cout << "Failed to load texture" << std::endl;
    }
    shotgunSprite.setTexture(defaultFrame);

    sf::FloatRect spriteBounds = shotgunSprite.getLocalBounds();

    shotgunSprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height/1.3 );
}

void Shotgun::render(sf::RenderWindow& window) {
    shotgunSprite.setTexture(defaultFrame);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        shotgunSprite.setTexture(fireFrame);
    }
    window.draw(shotgunSprite);
}