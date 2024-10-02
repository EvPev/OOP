#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"
#include "Player.h"

// Game Constructor
Game::Game(sf::Vector2f size,std::string title) 
    {
        gameWindow = new sf::RenderWindow(sf::VideoMode(size.x,size.y),title);

        player = new Entity(10,100,100);

        int map[10][10] = {
            {1,1,1,1,1,1,1,1,1,1},
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,0,0,0,0,0,0,0,0,1}, 
            {1,1,1,1,1,1,1,1,1,1}
        };
    }

// Destructor
Game::~Game(){}




void Game::run()
    {
        while (gameWindow->isOpen())
        {
            sf::Event event;
            while (gameWindow->pollEvent(event))
            {
                if(event.type == sf::Event::Closed) {
                    gameWindow->close();}


                if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                    player->move_forward(1);
                }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                    player->move_backward(1);
                }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                    player->turn_left(0.1);
                }else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                    player->turn_right(0.1);
                }


            }
            gameWindow->clear();

            player->draw(gameWindow);

            gameWindow->display();
        }
    }

