#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "Semi.h"

class Shotgun: public Semi {
public:
    Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void fire(sf::RenderWindow& window, double frameTime);

    ~Shotgun();
};

#endif