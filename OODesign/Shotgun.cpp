#include "Shotgun.h"
#include <iostream>

Shotgun::Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {};

void Shotgun::fire(sf::RenderWindow& window, double frameTime) {
    render(window, frameTime);
}

Shotgun::~Shotgun() {}