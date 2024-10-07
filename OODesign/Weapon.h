#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

class Weapon {
public:
    Weapon(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    virtual void fire() = 0;


protected:
    std::string defaultFile;
    std::string fireFile;
    sf::Texture defaultFrame;
    sf::Texture fireFrame;
    sf::Sprite sprite;
    int screenWidth;
    int screenHeight;
};

#endif