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


    // Find the win location for supplyed map
    double winX = 0; // initialising coords
    double winY = 0;
    for (int i = 0; i < mapHeight; i++) { // looping through map to find win point
        for (int j = 0; j < mapWidth; j++) {
            if (worldMap[j][i] == 5) {
                winX = j;
                winY = i;
            }
        }
    }


    // Load in start Text
    // Design Start Text
    sf::Text startText;
    startText.setFont(font);
    startText.setString("Raycaster\n\n Touch the yellow block to win\n Press spacebar to begin");
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

    // initialise Time to win score
    double timeToWin = 0;

    // Initialize enemies
    int numEnemies = 1;
    Enemy enemies[1] = {Enemy(10,10, screenWidth, screenHeight)};

    // Initialize the raycasting engine
    RaycastingEngine engine(player);

    // Create window
    sf::RenderWindow window(sf::VideoMode(screenWidth, screenHeight), "Raycaster");

    // Set up timing
    sf::Clock clock;



// Game Loop
    sf::Event event;
    while (window.isOpen()) {

        // Check if window has been closed
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
//--------------------------
// Game Start Screen and Instructions
//--------------------------
        if (gameState == 0) {
            //start screen
            // Clear window
            window.clear();

            // Render screen
            window.draw(startText);

            // Display rendered frame
            window.display();

            // Wait for player to start game
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
                sleep(1);

                // display instructions
                window.clear(); // clear window
                window.draw(instructionSprite); //render instructions
                window.display(); // display instructions
                sleep(5);
                gameState = 1; // Being Main Loop
            }

        }   



//--------------------------
// Main Game Loop
//--------------------------
        if (gameState == 1) { // Main Game Loop
            // Clock
            double frameTime = clock.restart().asSeconds();
            timeToWin += clock.restart().asSeconds() * 10000;


            // Main Game Clear Render Display Loop
            // Clear window
            window.clear();

            // Render the frame
            engine.render(window, worldMap, enemies, numEnemies);
            //enemies[0].render(window,player.getPosX(),player.getPosY(),player.getDirX(),player.getDirY());
            //render player after walls so they go ontop
            player.weapons[player.getCurrentWeapon()]->fire(window, frameTime, player.getPosX(), player.getPosY(),player.getDirX(), player.getDirY(), enemies[0].getPosX(), enemies[0].getPosY());
            // Check If enemy is hit
            if (player.weapons[player.getCurrentWeapon()]->getHit() == true) {
                enemies[0].changeHealth(-1);
                player.weapons[player.getCurrentWeapon()]->resetHit();
            }

            // Display rendered frame
            window.display();

            // Handle input and player movement
            player.handleInput(worldMap, frameTime);

            // Check If Player Has Won
            double lean = 0.9;
            // Check Player position vs win position
            if (player.getPosX() < winX + lean && player.getPosX() > winX - lean) {     
                if (player.getPosY() < winY + lean && player.getPosY() > winY - lean) {
                    gameState = 2;

                }
            }     
        }   


        
//--------------------------
// End game screen and text
//--------------------------
        if (gameState == 2) { // If game is won

            // Read in previous scores from file
            std::ifstream endTextFile("PlayerScores.txt");
            std::string endTimeTemp;

            // Record The best 3 times
            int bestThreeTimes[3] {100000,100000,100000}; // setting high times to be replaced by minimum times
            getline(endTextFile, endTimeTemp);

            // While loop to read all of the Previous Game times from txt file
            while (getline(endTextFile, endTimeTemp)) { 
                if (stoi(endTimeTemp) < bestThreeTimes[0]) {
                    bestThreeTimes[0] = stoi(endTimeTemp);
                } else if (stoi(endTimeTemp) < bestThreeTimes[1]) {
                    bestThreeTimes[1] = stoi(endTimeTemp);
                } else if (stoi(endTimeTemp) < bestThreeTimes[2]) {
                    bestThreeTimes[2] = stoi(endTimeTemp);
                }
            }

            // Display the Best three times and current time
            std::string timesDisplayString; // Creating string to be displayed
            timesDisplayString = timesDisplayString + "Current Time: " + std::to_string(timeToWin); // Including Current Time

            // Including Previous best times
            timesDisplayString = timesDisplayString + "\n \nPrevious Best Times:\n"; 
            for (int i = 0; i < 3; i++) {
                timesDisplayString = timesDisplayString + std::to_string(bestThreeTimes[i]) + "\n";
            }

            // Designing Text to be displayed
            sf::Text endText;
            endText.setFont(font);
            endText.setString(timesDisplayString);
            endText.setCharacterSize(50);  // Set font size
            endText.setFillColor(sf::Color::White);  // Text color
            endText.setPosition(10, 10);  // Text position


            // Clear window
            window.clear();

            // Render screen with text
            window.draw(endText);

            // Display Game Times
            window.display();
        }
    }


//--------------------------
// Saving player win Time
//--------------------------
    if (timeToWin > 0) { // Check for valid win time
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
