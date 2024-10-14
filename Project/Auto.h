#ifndef AUTO_H
#define AUTO_H
#include <iostream>
#include "Weapon.h"

class Auto: public Weapon {
public:
    Auto(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void render(sf::RenderWindow& window, double frameTime);
    virtual ~Auto();
};

#endif