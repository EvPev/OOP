#ifndef AUTO_H
#define AUTO_H
#include <iostream>
#include "Weapon.h"

class Auto: public Weapon {
public:
    // Constructor
    Auto(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);

    // Render function
    void render(sf::RenderWindow& window, double frameTime);

    // Destructor
    virtual ~Auto();
};

#endif