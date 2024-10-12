#include "Enemy.h"
#include <cmath>

Enemy::Enemy(double posX, double posY, int screenWidth, int screenHeight) {
this-> posX = posX;
this-> posY = posY;
waitTime = 0;
health = 3;
damage = 1;
distFromPlayer = 0;
this->screenWidth = screenWidth;
this->screenHeight = screenHeight;
// Loading the textures
    if (!texture.loadFromFile("Assets/demon.png")) {
        std::cout << "Failed to load texture" << std::endl;
    }
    sprite.setTexture(texture);
}


Enemy::~Enemy() {}
void Enemy::move() {}
void Enemy::attack(double playerPosX, double playerPosY, double frameTime) {
    waitTime = waitTime + frameTime;
}

void Enemy::changeHealth(int change) {health += change;}
int Enemy::getHealth() {return health;}
double Enemy::getPosX() {return posX;}
double Enemy::getPosY() {return posY;}




void Enemy::render(sf::RenderWindow& window, double pPosX, double pPosY, double pDirX, double pDirY, double planeX, double planeY) {
    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition((screenWidth - spriteBounds.width)/2, (screenHeight - spriteBounds.height)/2);

    distFromPlayer = abs(pPosX - posY);
    distFromPlayer = abs(pPosY - posX);


    
    sprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height);
    window.draw(sprite);
}