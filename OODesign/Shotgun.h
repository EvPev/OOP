#ifndef SHOTGUN_H
#define SHOTGUN_H

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Shotgun {
public:
    Shotgun(int screenWidth, int screenHeight);
    void render(sf::RenderWindow& window);


private:
    sf::Texture defaultFrame;
    sf::Texture fireFrame;
    sf::Sprite shotgunSprite;
    int screenWidth;
    int screenHeight;
};

#endif