#ifndef MG_H
#define MG_H
#include "Auto.h"

class MG: public Auto {
public:
    // Constructor
    MG(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    
    // Fire Function
    void fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY, double eposX, double eposY);

    // destructor
    ~MG();
};

#endif