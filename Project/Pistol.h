#ifndef PISTOL_H
#define PISTOL_H
#include "Semi.h"

class Pistol: public Semi {
public:
    // Constructor
    Pistol(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);

    // Fire function
    void fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY);

    // Destructor
    ~Pistol();
};

#endif