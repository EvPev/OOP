#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Window.hpp>
#include "Shotgun.h"

class Player {
public:
    Player(double posX, double posY, double dirX, double dirY, double planeX, double planeY, int screenWidth, int screenHeight);
    ~Player();

    void handleInput(const int worldMap[24][24], double frameTime);

    double getPosX() const { return posX; }
    double getPosY() const { return posY; }
    double getDirX() const { return dirX; }
    double getDirY() const { return dirY; }
    double getPlaneX() const { return planeX; }
    double getPlaneY() const { return planeY; }

    Weapon* weapons[weaponCount];

private:
    double posX, posY;     // Player position
    double dirX, dirY;     // Player direction vector
    double planeX, planeY; // 2D raycasting plane

    int weaponCount;

    
   

    void rotate(double angle);
};

#endif
