#ifndef SEMI_H
#define SEMI_H
#include <iostream>
#include "Weapon.h"

class Semi: public Weapon {
public:
    // Constructor
    Semi(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);

    // Render function
    virtual void render(sf::RenderWindow& window, double frameTime);

    // Destructor
    virtual ~Semi();
};

#endif