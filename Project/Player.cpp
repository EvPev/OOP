#include "Player.h"
#include <cmath>
#include <iostream>

Player::Player(double posX, double posY, double dirX, double dirY, double planeX, double planeY, int screenWidth, int screenHeight)
    // Initialise position
    : posX(posX), posY(posY), dirX(dirX), dirY(dirY), planeX(planeX), planeY(planeY) {

        waitTime = 0;
        weaponCount = 3;
        currentWeapon = 0;
        weapons = new Weapon*[weaponCount];
        score = 0;

        // Initialise Weapons
        weapons[0] = new Shotgun("Assets/cutShotgun.png", "Assets/shotgunFire.png", screenWidth, screenHeight);
        weapons[1] = new Pistol("Assets/pistol.png", "Assets/pistolFire.png", screenWidth, screenHeight);
        weapons[2] = new MG("Assets/mg42.png", "Assets/mg42Fire.png", screenWidth, screenHeight);
    }


// Set and get funcitons
int Player::getCurrentWeapon() {return currentWeapon;}
int Player::getPlayerScore() {return score;}
void Player::setPlayerScore(int addScore) {score = addScore;}
void Player::setPosX(double x) {posX = x;}
void Player::setPosY(double y) {posY = y;}
void Player::setDirX(double x) {dirX = x;}
void Player::setDirY(double y) {dirY = y;}

// Destructor
Player::~Player(){
    for (int i = 0; i < weaponCount; i++) {
        delete weapons[i];
    }
    delete[] weapons;
}

// Input handling function
void Player::handleInput(const int worldMap[24][24], double frameTime) {
    double moveSpeed = frameTime * 5.0;
    double rotSpeed = frameTime * 3.0;

    if (waitTime <= 4) {
        waitTime += frameTime;
    }

    // Player movement controls
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

    
    
    if (waitTime >= 0.5) {
        // Weapon Swaping controls
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
            if (currentWeapon < weaponCount - 1) {
                currentWeapon++;
            } else if (currentWeapon >= weaponCount - 1) {
                currentWeapon = 0;
            }
            waitTime = 0;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
            if (currentWeapon > 0) {
                currentWeapon = currentWeapon - 1;
            } else if (currentWeapon < 1) {
                currentWeapon = weaponCount - 1;
            }
            waitTime = 0;
        }
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
