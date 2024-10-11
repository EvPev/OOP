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


    double spriteX = posX - pPosX;
    double spriteY = posY - pPosY;
    double invDet = 1.0 / (planeX * pDirY - pDirX * planeY);
    double transformX = invDet * (pDirY * spriteX - pDirX * spriteY);
    double transformY = invDet * (-planeY * spriteX + planeX * spriteY);

    int spriteScreenX = int((screenWidth / 2) * (1 + transformX / transformY));

// Calculate height of the sprite on screen
    int spriteHeight = abs(int(screenHeight / transformY));  // Prevent fisheye by using transformY
    int drawStartY = -spriteHeight / 2 + screenHeight / 2;
    if (drawStartY < 0) {drawStartY = 0;}
    int drawEndY = spriteHeight / 2 + screenHeight / 2;
    if (drawEndY >= screenHeight) {drawEndY = screenHeight - 1;}

    // Calculate width of the sprite
    int spriteWidth = abs(int(screenHeight / transformY));
    int drawStartX = -spriteWidth / 2 + spriteScreenX;
    if (drawStartX < 0) {drawStartX = 0;}
    int drawEndX = spriteWidth / 2 + spriteScreenX;
    if (drawEndX >= screenWidth) {drawEndX = screenWidth - 1;}





    sf::FloatRect spriteBounds = sprite.getLocalBounds();
    sprite.setPosition(screenWidth - spriteBounds.width, screenHeight - spriteBounds.height);
    window.draw(sprite);
}