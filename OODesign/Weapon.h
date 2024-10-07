#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Shotgun {
public:
    Shotgun(int screenWidth, int screenHeight);
    void render() = 0;


private:
    int screenWidth;
    int screenHeight;
};

#endif