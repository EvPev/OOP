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
    // Initialising Player
    Player player(10, 10, 10, 9, 0, 0, screenWidth, screenHeight);
    
    

    // Initialise values
    double distance = 0;
    double correctDistance = 0;


    //-------------------------------------------
    // Check when Player is looking forward
    // Place player and create ray
    player.setPosX(2);
    player.setPosY(3);
    player.setDirX(2);
    player.setDirY(2);

    Ray ray1(player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());

    // Call Function that calculates ray distance
    ray1.castRay(worldMap);

    distance = ray1.getPerpWallDist();
    correctDistance = 0.5; // Correct angle

    // Check if its correct
    if (distance == correctDistance) {
        print("--------------");
        print("Test [Working]");
        print("--------------");
    } else {
        print("--------------");
        print("Test [Failed]");
        print("--------------");
    }

    //-------------------------------------------

    //-------------------------------------------
    // Check when Player is looking right
    // Place player and create ray
    player.setPosX(2);
    player.setPosY(2);
    player.setDirX(3);
    player.setDirY(2);

    Ray ray2(player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());


    // Call Function that calculates ray distance
    ray2.castRay(worldMap);

    distance = ray2.getPerpWallDist();
    correctDistance = (1.0/3); // Correct distance

    // Check if its correct
    if (distance == correctDistance) {
        print("--------------");
        print("Test [Working]");
        print("--------------");
    } else {
        print("--------------");
        print("Test [Failed]");
        print("--------------");
    }
    //-------------------------------------------
}

