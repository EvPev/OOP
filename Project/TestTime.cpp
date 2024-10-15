#include <SFML/Graphics.hpp>
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib> 
#include <ctime> 
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
    int timeToWin = 0;
    std::vector<int> timesVecCheck(6);
    std::srand(std::time(0));
    std::string playerScoreStr = "null";
    std::remove("PlayerScoresTest.txt");

    for (int i = 0; i < 6; i++){
        timeToWin = std::rand();
        player.setPlayerScore(timeToWin);
        playerScoreStr = std::to_string(player.getPlayerScore());

        timesVecCheck[i] = stoi(playerScoreStr);

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
    std::vector<int> timesVec(6);
    std::fill(timesVec.begin(), timesVec.end(), 10000);
    int i = 0;
    while (getline(endTextFile, endTimeTemp)) { 
        timesVec[i] = stoi(endTimeTemp);
        i++;
    }
    std::sort(timesVec.begin(), timesVec.end());
    std::sort(timesVecCheck.begin(), timesVecCheck.end());

    

    if (timesVec[0] == timesVecCheck[0] && timesVec[1] == timesVecCheck[1] && timesVec[2] == timesVecCheck[2]) {
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