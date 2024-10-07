#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

class Shotgun {
public:
    Shotgun(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    void render(sf::RenderWindow& window, double frameTime);


private:
    std::string defaultFile;
    std::string fireFile;
    sf::Texture defaultFrame;
    sf::Texture fireFrame;
    sf::Sprite shotgunSprite;
    int screenWidth;
    int screenHeight;
    double waitTime;
};

#endif