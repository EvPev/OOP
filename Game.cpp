#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "Entity.h"
#include "Player.h"

// Game Constructor
Game::Game(sf::Vector2f size,std::string title) 
    {
        // Game Window
        gameWindow = new sf::RenderWindow(sf::VideoMode(size.x,size.y),title);

        // Player
        player = new Player(10,50,50);
    }

// Destructor
Game::~Game(){
    delete gameWindow;
    delete player;
}



// Game Loop
void Game::run()
{
    while (gameWindow->isOpen())
    {
        sf::Event event;
        while (gameWindow->pollEvent(event))
        {
            // Close Window
            if(event.type == sf::Event::Closed) {gameWindow->close();}

            // Player Movement
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                player->move_forward(1);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                player->move_backward(1);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                player->turn_left(0.1);
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                player->turn_right(0.1);
            }
        }

        gameWindow->clear(sf::Color::Black); // clear old frame

        // Draw game 
        player->draw(gameWindow);
        gameWindow->display(); 
        
    }
}

