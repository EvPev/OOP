#ifndef ENEMY_H
#define ENEMY_H

#include <SFML/Graphics.hpp>
#include <iostream>

class Enemy
{
    private:
        double posX, posY; // Enemy Position
        int health, damage; // Enemy stats
        double waitTime; // Timer

        double distFromPlayer; // Distance from Player

        int screenWidth, screenHeight; // Screen Size

        sf::Texture texture;
        sf::Sprite sprite;

    public:
        Enemy(double posX, double posY, int screenWidth, int screenHeight);
        ~Enemy();
        void move();
        void attack(double playerPosX, double playerPosY, double frameTime);

        void changeHealth(int change);
        int getHealth();
        double getPosX();
        double getPosY();

        void render(sf::RenderWindow& window, double pPosX, double pPosY, double pDirX, double pDirY, double planeX, double planeY);
};

#endif

