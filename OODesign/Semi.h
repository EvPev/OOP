#ifndef SEMI_H
#define SEMI_H
#include <iostream>
#include "Weapon.h"

class Semi: public Weapon {
public:
    Semi(std:string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void fire();
};

#endif