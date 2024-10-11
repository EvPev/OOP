#ifndef WEAPON_H
#define WEAPON_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

class Weapon {
public:
    Weapon(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight);
    virtual ~Weapon();
    virtual void render(sf::RenderWindow& window, double frameTime) = 0;
    virtual void fire(sf::RenderWindow& window, double frameTime, double posX, double posY, double dirX, double dirY) = 0;

    


protected:
    std::string defaultFile;
    std::string fireFile;
    sf::Texture defaultFrame;
    sf::Texture fireFrame;
    sf::Sprite sprite;
    int screenWidth;
    int screenHeight;
    double waitTime;
};

#endif