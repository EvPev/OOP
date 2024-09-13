#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"

Game::Game(sf::Vector2f size,std::string title) 
    {
        gameWindow = new sf::RenderWindow(sf::VideoMode(size.x,size.y),title);
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);
    }


void Game::run()
    {
        while (gameWindow->isOpen())
        {
            sf::Event event;
            while (gameWindow->pollEvent(event))
            {
                if(event.type == sf::Event::Closed) 
                {gameWindow->close();}
            }
            gameWindow->clear();
            gameWindow->display();
        }
    }
    
Game::~Game(){}
