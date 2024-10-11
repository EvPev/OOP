#include "Pistol.h"
#include <iostream>

Pistol::Pistol(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {};

void Pistol::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY) {
    render(window, frameTime);
}

Pistol::~Pistol() {}