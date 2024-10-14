#include "Ray.h"

// Constructor
Ray::Ray(double posX, double posY, double dirX, double dirY)
    : posX(posX), posY(posY), dirX(dirX), dirY(dirY) {}

    

// Ray Casting Function
void Ray::castRay(const int worldMap[24][24]) {
    mapX = int(posX);
    mapY = int(posY);

    deltaDistX = (dirX == 0) ? 1e30 : std::abs(1 / dirX);
    deltaDistY = (dirY == 0) ? 1e30 : std::abs(1 / dirY);

    // Calculate step and initial sideDist
    if (dirX < 0) {
        stepX = -1;
        sideDistX = (posX - mapX) * deltaDistX;
    } else {
        stepX = 1;
        sideDistX = (mapX + 1.0 - posX) * deltaDistX;
    }
    if (dirY < 0) {
        stepY = -1;
        sideDistY = (posY - mapY) * deltaDistY;
    } else {
        stepY = 1;
        sideDistY = (mapY + 1.0 - posY) * deltaDistY;
    }

    // As long as the ray hasn't hit a wall continue scanning
    int hit = 0;
    while (hit == 0) {
        if (sideDistX < sideDistY) {
            sideDistX += deltaDistX;
            mapX += stepX;
            side = 0;
        } else {
            sideDistY += deltaDistY;
            mapY += stepY;
            side = 1;
        }
        if (worldMap[mapX][mapY] > 0) hit = 1;
    }

    // check if ray hit a vertical or horisontal wall face
    if (side == 0) perpWallDist = (sideDistX - deltaDistX);
    else perpWallDist = (sideDistY - deltaDistY);
}