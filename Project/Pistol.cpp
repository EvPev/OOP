#include "Pistol.h"
#include <iostream>

// Constructor
Pistol::Pistol(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight)
: Semi(defaultFile, fireFile, screenWidth, screenHeight) {
    waitTime = 0;};

// Destructor
Pistol::~Pistol() {}

// Fire and render Function
void Pistol::fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY) {
    render(window, frameTime);
    // check if shot has hit enemy
    if (abs(eposX - posX) < 6 && abs(eposY - posY) < 6) {
        hit = true;
    }
}

