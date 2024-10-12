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

int main() {

    // GameSate
    int gameState = 0;
    // 0 = start screen
    // 1 = main loop
    // 2 = win

    // Start Screen text
    sf::Font font;
    if (!font.loadFromFile("Assets/Arial.ttf")) {
        return -1;
    }

    // Design Start Text
    sf::Text startText;
    startText.setFont(font);
    startText.setString("Raycaster\nPress spacebar to begin");
    startText.setCharacterSize(50);  // Set font size
    startText.setFillColor(sf::Color::White);  // Text color
    startText.setPosition(100, 200);  // Text position

    // Load In instruction text box texture
    sf::Texture instructionTexture;
    sf::Sprite instructionSprite;

    if (!instructionTexture.loadFromFile("Assets/Instructions.png")) {
        std::cout << "Failed to load texture" << std::endl;
    }
    instructionSprite.setTexture(instructionTexture);
    sf::FloatRect spriteBounds = instructionSprite.getLocalBounds();
    instructionSprite.setPosition((screenWidth - spriteBounds.width)/2, (screenHeight - spriteBounds.height)/2);



    // Initialize the player
    Player player(1, 1, -1, 0, 0, 0.66, screenWidth, screenHeight);

    // Time to win
    double timeToWin = 0;

    // Initialize enemies
    int numEnemies = 1;
    Enemy enemies[1] = {Enemy(2,2, screenWidth, screenHeight)};

    // Initialize the raycasting engine
    RaycastingEngine engine(player);

    // Create window
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Raycaster");

    // Set up timing
    sf::Clock clock;

    sf::Event event;
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }



//--------------------------
// Game Start Screen Rendering and text
//--------------------------
        if (gameState == 0) {
            //start screen
            // Clear window
            window.clear();

            // Render screen
            window.draw(startText);

            // Display rendered frame
            window.display();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
                sleep(1);
                window.clear();
                window.draw(instructionSprite);
                window.display();
                sleep(5);
                gameState = 1;
            }

        }   



//--------------------------
// Main Game Loop
//--------------------------
        if (gameState == 1) {
            // Clock
            double frameTime = clock.restart().asSeconds();
            timeToWin += clock.restart().asSeconds() * 10000;

            // Clear window
            window.clear();

            // Render the frame
            engine.render(window, worldMap, enemies, numEnemies);
            player.weapons[player.getCurrentWeapon()]->fire(window, frameTime, player.getPosX(), player.getPosY(),player.getDirX(), player.getDirY());


            // Display rendered frame
            window.display();

            // Handle input and player movement
            player.handleInput(worldMap, frameTime);


        }   


        
//--------------------------
// End game screen and text
//--------------------------
        if (gameState == 2) {
            std::ifstream endTextFile("PlayerScores.txt");
            std::string endTimeTemp;
            int bestThreeTimes[3] {100000,100000,100000};
            getline(endTextFile, endTimeTemp);
            while (getline(endTextFile, endTimeTemp)) {
                if (stoi(endTimeTemp) < bestThreeTimes[0]) {
                    bestThreeTimes[0] = stoi(endTimeTemp);
                } else if (stoi(endTimeTemp) < bestThreeTimes[1]) {
                    bestThreeTimes[1] = stoi(endTimeTemp);
                } else if (stoi(endTimeTemp) < bestThreeTimes[2]) {
                    bestThreeTimes[2] = stoi(endTimeTemp);
                }
            }

            std::string timesDisplayString;
            timesDisplayString = timesDisplayString + "Current Time: " + std::to_string(timeToWin);
            timesDisplayString = timesDisplayString + "\n \nPrevious Best Times:\n";
            for (int i = 0; i < 3; i++) {
                timesDisplayString = timesDisplayString + std::to_string(bestThreeTimes[i]) + "\n";
            }
            sf::Text endText;
            endText.setFont(font);
            endText.setString(timesDisplayString);
            endText.setCharacterSize(50);  // Set font size
            endText.setFillColor(sf::Color::White);  // Text color
            endText.setPosition(10, 10);  // Text position
            // End screen
            // Clear window
            window.clear();

            // Render screen
            window.draw(endText);

            // Display rendered frame
            window.display();
        }
    }


//--------------------------
// Saving player win Time
//--------------------------
    if (timeToWin > 0) {
        player.setPlayerScore(timeToWin);
        std::string playerScoreStr =std::to_string(timeToWin);

        // Open the file in append mode
        std::ofstream file;
        file.open("PlayerScores.txt", std::ios::app);

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




return 0;
}
