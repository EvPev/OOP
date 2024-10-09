#include "Player.h"
#include <cmath>

Player::Player(double posX, double posY, double dirX, double dirY, double planeX, double planeY, int screenWidth, int screenHeight)
    // Initiate position
    : posX(posX), posY(posY), dirX(dirX), dirY(dirY), planeX(planeX), planeY(planeY) {

        weaponCount = 4;

        // Initiate Weapons
        weapons[0] = new Shotgun("Assets/shotgun.png", "Assets/shotgunFire.png", screenWidth, screenHeight);
        weapons[1] = new Shotgun("Assets/shotgun.png", "Assets/shotgunFire.png", screenWidth, screenHeight);
        weapons[2] = new Shotgun("Assets/shotgun.png", "Assets/shotgunFire.png", screenWidth, screenHeight);
        weapons[3] = new Shotgun("Assets/shotgun.png", "Assets/shotgunFire.png", screenWidth, screenHeight);
    }

Player::~Player(){
    for (int i = 0; i < weaponCount; i++) {
        delete weapons[i];
    }
}

void Player::handleInput(const int worldMap[24][24], double frameTime) {
    double moveSpeed = frameTime * 5.0;
    double rotSpeed = frameTime * 3.0;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        if (worldMap[int(posX + dirX * moveSpeed)][int(posY)] == 0) posX += dirX * moveSpeed;
        if (worldMap[int(posX)][int(posY + dirY * moveSpeed)] == 0) posY += dirY * moveSpeed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        if (worldMap[int(posX - dirX * moveSpeed)][int(posY)] == 0) posX -= dirX * moveSpeed;
        if (worldMap[int(posX)][int(posY - dirY * moveSpeed)] == 0) posY -= dirY * moveSpeed;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        rotate(-rotSpeed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        rotate(rotSpeed);
    }
}

void Player::rotate(double angle) {
    double oldDirX = dirX;
    dirX = dirX * cos(angle) - dirY * sin(angle);
    dirY = oldDirX * sin(angle) + dirY * cos(angle);
    double oldPlaneX = planeX;
    planeX = planeX * cos(angle) - planeY * sin(angle);
    planeY = oldPlaneX * sin(angle) + planeY * cos(angle);
}
