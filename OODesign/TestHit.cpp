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

#define print(x) std::cout << x << std::endl



int main() {
    // Initialise Player, enemy and window
    Player player(1, 1, -1, 0, 0, 0.66, screenWidth, screenHeight);
    Enemy(10,10, screenWidth, screenHeight);
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Raycaster");
    double frameTime = clock.restart().asSeconds();

    // run the game (animations need frametime)
    for (int i = 0; i < 100; i++) {
        double frameTime = clock.restart().asSeconds();
    }
    player.weapons[player.getCurrentWeapon()]->fire(window, frameTime, player.getPosX(), player.getPosY(),player.getDirX(), player.getDirY(), enemies[0].getPosX(), enemies[0].getPosY());
    // Check if its correct
    if (player.weapons[player.getCurrentWeapon()]->getHit() == true) {
        print("--------------");
        print("Test [Working]");
        print("--------------");
    } else {
        print("--------------");
        print("Test [Failed]");
        print("--------------");
    }

    player.weapons[player.getCurrentWeapon()]->resetHit()


    // Check if the weapon can miss
    player.setPosX(50);
    player.setPosY(50);

    // run the game (animations need frametime)
    for (int i = 0; i < 100; i++) {
        double frameTime = clock.restart().asSeconds();
    }
    player.weapons[player.getCurrentWeapon()]->fire(window, frameTime, player.getPosX(), player.getPosY(),player.getDirX(), player.getDirY(), enemies[0].getPosX(), enemies[0].getPosY());
    // Check if its correct
    if (player.weapons[player.getCurrentWeapon()]->getHit() == false) {
        print("--------------");
        print("Test [Working]");
        print("--------------");
    } else {
        print("--------------");
        print("Test [Failed]");
        print("--------------");
    }
}




