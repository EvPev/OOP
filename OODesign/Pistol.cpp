#include "Pistol.h"
#include <iostream>

Pistol::Pistol(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {};

void Pistol::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY) {
    render(window, frameTime);
    if (abs(eposX - posX) < 6 && abs(eposY - posY) < 6) {
        hit = true;
    }
}

Pistol::~Pistol() {}