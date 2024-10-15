#include "Enemy.h"
#include <cmath>
#include <iostream>
#define print(x) std::cout << x << std::endl


// Constructor
Enemy::Enemy(double posX, double posY, int screenWidth, int screenHeight) {
this-> posX = posX;
this-> posY = posY;
waitTime = 0;
health = 3;
damage = 1;
distFromPlayer = new double;
this->screenWidth = screenWidth;
this->screenHeight = screenHeight;
// Loading the textures
    if (!texture.loadFromFile("Assets/demon.png")) {
        std::cout << "Failed to load texture" << std::endl;
    }
    sprite.setTexture(texture);
}

// Destructor
Enemy::~Enemy() {
    delete distFromPlayer;
}

// Move Function
void Enemy::move() {}

// function to attack player
void Enemy::attack(double playerPosX, double playerPosY, double frameTime) {
    waitTime = waitTime + frameTime;
}

// Set and get function
void Enemy::changeHealth(int change) {health += change;}
int Enemy::getHealth() {return health;}
double Enemy::getPosX() {return posX;}
double Enemy::getPosY() {return posY;}
double Enemy::getAngle() {return Angle;}

void Enemy::setPosX(double x) {posX = x;}
void Enemy::setPosY(double y) {posY = y;}


// Render Function
void Enemy::render(sf::RenderWindow& window, double pPosX, double pPosY, double pDirX, double pDirY) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();

    *distFromPlayer = abs(pPosX - posX) + abs(pPosY - posY);

    
    // Calculate the Angle the enemy is from the player
    double ABBCDot = ((posX - pPosX) * (pDirX - pPosX)) + ((posY - pPosY) * (pDirY - pPosY));

    double ABBCDist = ((abs(pPosX - posX)) + (abs(pPosY - posY))) * ((abs(pPosX - pDirX)) + (abs(pPosY - pDirY)));

    Angle = acos(ABBCDot / ABBCDist); //Positive angle from player (same on left and right)

    
    
    // Calculating if enemy is on the left or right of player
    bool OnLeft = false;

    // If Player has first and fourth quadrent direction vector
    if ((pDirX - pPosX) > 0) {
        double h = ((posX - pPosX) / pDirX); // Calculating if enemy is above or below the line created by the direction vector
        double lineY = ((pPosY + h) * pDirY); // Calculating the Y value of the line at the X value of the enemy

        if (posY > lineY) {OnLeft = true;}
    }

    // If Player has Second or Third quadrent direction vector
    else if ((pDirX - pPosX) < 0) {
        double h = ((posX - pPosX) / pDirX); // Calculating if enemy is above or below the line created by the direction vector
        double lineY = ((pPosY + h) * pDirY); // Calculating the Y value of the line at the X value of the enemy

        if (posY < lineY) {OnLeft = true;}
    }

    // If Player's direction vector is between quads 1 and 2
    else if ((pDirX - pPosX) == 0 && (pDirY - pPosY) > 0) {
        
        if (posX < pPosX) {OnLeft = true;}
    }

    // If Player's direction vector is between quads 3 and 4
    else if ((pDirX - pPosX) == 0 && (pDirY - pPosY) < 0) {
        
        if (posX > pPosX) {OnLeft = true;}
    }

    // If the enemy is to the left of the player make the angle negetive
    if (OnLeft == true) {Angle = Angle * (-1);}

    //Based on the Angle find the pixle of the screen the centre of the sprite should be
    double screenPosition = ((2 * Angle * screenWidth) / 3.1415926) + 600;
    


    sprite.setPosition((screenPosition - spriteBounds.width/2)/2, (screenHeight - spriteBounds.height/2)/2);
    window.draw(sprite);
}