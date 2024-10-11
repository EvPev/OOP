#ifndef MG_H
#define MG_H
#include "Auto.h"

class MG: public Auto {
public:
    MG(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY);

    

    ~MG();
};

#endif