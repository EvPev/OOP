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
#include <vector>
#include <algorithm>
#include <cstdio>

#define print(x) std::cout << x << std::endl




int main () {
    // Initialize the player and time to win testing variable
    Player player(1, 1, -1, 0, 0, 0.66, screenWidth, screenHeight);
    double timeToWin = 0;

    for (int i = 0; i < 6; i++){
        timeToWin = i * 3;
        player.setPlayerScore(timeToWin);
        std::string playerScoreStr =std::to_string(timeToWin);

        // Open the file in append mode
        std::ofstream file;
        file.open("PlayerScoresTest.txt", std::ios::app);

        // Check if the file is open
        if (!file.is_open()) {
            std::cout << "Failed to open the file." << std::endl;
            return 1;
        }
        // Write to the file
        file << playerScoreStr << "\n"; 

        // Close the file
        file.close();
    }

    // Read in previous scores from file
    std::ifstream endTextFile("PlayerScoresTest.txt");
    std::string endTimeTemp;

    // Record The best 3 times
    std::vector<int> timesVec(100);
    std::fill(timesVec.begin(), timesVec.end(), 10000);
    int i = 0;
    while (getline(endTextFile, endTimeTemp)) { 
        timesVec[i] = stoi(endTimeTemp);
        i++;
    }
    std::sort(timesVec.begin(), timesVec.end());

    if (timesVec[0] == 0 && timesVec[1] == 3 && timesVec[2] == 6) {
        print("--------------");
        print("Test [Working]");
        print("--------------");
    } else {
        print("--------------");
        print("Test [Failed]");
        print("--------------");
    }

    std::remove("PlayerScoresTest.txt");
}