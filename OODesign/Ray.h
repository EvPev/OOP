#ifndef RAY_H
#define RAY_H

#include <cmath>
#include "Map.h"

class Ray {
public:
    Ray(double posX, double posY, double dirX, double dirY);

    void castRay(const int worldMap[24][24]);

    double getPerpWallDist() const { return perpWallDist; }
    int getMapX() const { return mapX; }
    int getMapY() const { return mapY; }
    int getSide() const { return side; }

private:
    double posX, posY;  // Position of the player
    double dirX, dirY;  // Direction of the ray
    double perpWallDist; // Perpendicular distance to the wall

    int mapX, mapY;  // Current position in the grid map
    int stepX, stepY; // Direction to step in x or y
    int side;  // Was a NS or EW wall hit?

    double sideDistX, sideDistY;  // Distance from the ray's current position to the next x or y side
    double deltaDistX, deltaDistY;  // Length of the ray from one x or y-side to the next
};

#endif
