#ifndef PISTOL_H
#define PISTOL_H
#include "Semi.h"

class Pistol: public Semi {
public:

    Pistol(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY);

    ~Pistol();
};

#endif