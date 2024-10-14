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

        double Angle; // Angle from player

        sf::Texture texture;
        sf::Sprite sprite;

    public:
        // Constructor
        Enemy(double posX, double posY, int screenWidth, int screenHeight);

        // Destructor
        ~Enemy();

        // Move function
        void move();

        // Attack function
        void attack(double playerPosX, double playerPosY, double frameTime);

        // set and get functions
        void changeHealth(int change);
        int getHealth();
        double getPosX();
        double getPosY();
        double getAngle();
        void setPosX(double x);
        void setPosY(double y);


        // render enemy function
        void render(sf::RenderWindow& window, double pPosX, double pPosY, double pDirX, double pDirY);
};

#endif

