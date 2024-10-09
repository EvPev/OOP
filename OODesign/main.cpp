#include <SFML/Graphics.hpp>
#include "Player.h"
#include "RaycastingEngine.h"
#include "Map.h"
#include "Weapon.h"
#include "Semi.h"
#include "Shotgun.h"


int main() {

    // Initialize the player
    Player player(1, 1, -1, 0, 0, 0.66, screenWidth, screenHeight);

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
        // Clock
        double frameTime = clock.restart().asSeconds();

        // Clear window
        window.clear();

        // Render the frame
        engine.render(window, worldMap);
        player.weapons[0]->fire(window, frameTime);


        // Display rendered frame
        window.display();

        // Handle input and player movement
        player.handleInput(worldMap, frameTime);
    }
    return 0;
}
