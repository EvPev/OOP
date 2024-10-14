#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>
#include <string>
#include "Player.h"
#include "RaycastingEngine.h"
#include "Map.h"
#include "Weapon.h"
#include "Semi.h"
#include "Shotgun.h"
#include "Pistol.h"
#include "Enemy.h"
#include <unistd.h>

const double pi = 3.14159265359;

#define print(x) std::cout << x << std::endl

// Test to Check if the angle of the enemy from the player is calculated corectly 
int main() {
    // Initialising Window Player and Enemy
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Raycaster");
    Enemy enemy(11, 11, screenWidth, screenHeight);
    Player player(10, 10, 10, 9, 0, 0, screenWidth, screenHeight);

    // Initialise values
    double angle = 0;
    double correctAngle = 0;


    //-------------------------------------------
    // Check when Enemy is directly above
    // Place Enemy and player
    player.setPosX(10);
    player.setPosY(10);
    player.setDirX(10);
    player.setDirY(9);

    enemy.setPosX(10);
    enemy.setPosY(8);

    // Call Function that calculates enemy position
    enemy.render(window,player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());

    angle = enemy.getAngle();
    correctAngle = 0; // Correct angle

    // Check if its correct
    print("--------------");
    std::cout << "Angle: " << angle << std::endl;
    std::cout << "CorrectAngle: " << correctAngle  << std::endl;
    print("--------------");
    //-------------------------------------------


    //-------------------------------------------
    // Check when Enemy is directly to the left
    // Place Enemy and player
    player.setPosX(10);
    player.setPosY(10);
    player.setDirX(10);
    player.setDirY(9);

    enemy.setPosX(9);
    enemy.setPosY(10);

    // Call Function that calculates enemy position
    enemy.render(window,player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());

    angle = enemy.getAngle();
    correctAngle = pi/2; // Correct angle

    // Check if its correct
    print("--------------");
    std::cout << "Angle: " << angle << std::endl;
    std::cout << "CorrectAngle: " << correctAngle  << std::endl;;
    print("--------------");
    //-------------------------------------------

    //-------------------------------------------
    // Check when Enemy is directly to the right
    // Place Enemy and player
    player.setPosX(10);
    player.setPosY(10);
    player.setDirX(10);
    player.setDirY(9);

    enemy.setPosX(11);
    enemy.setPosY(10);

    // Call Function that calculates enemy position
    enemy.render(window,player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());

    angle = enemy.getAngle();
    correctAngle = pi/2 * (-1); // Correct angle

    // Check if its correct
    print("--------------");
    std::cout << "Angle: " << angle << std::endl;
    std::cout << "CorrectAngle: " << correctAngle  << std::endl;
    print("--------------");
    //-------------------------------------------

    //-------------------------------------------
    // Check when Enemy is directly behide
    // Place Enemy and player
    player.setPosX(10);
    player.setPosY(10);
    player.setDirX(10);
    player.setDirY(9);

    enemy.setPosX(10);
    enemy.setPosY(11);

    // Call Function that calculates enemy position
    enemy.render(window,player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());

    angle = enemy.getAngle();
    correctAngle = pi; // Correct angle
    
    // Check if its correct
    print("--------------");
    std::cout << "Angle: " << angle << std::endl;
    std::cout << "CorrectAngle: " << correctAngle  << std::endl;
    print("--------------");
    //-------------------------------------------
}


