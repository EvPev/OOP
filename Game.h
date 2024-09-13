#include <SFML/Graphics.hpp>
#include <iostream>

class Game
{
private:
    sf::RenderWindow* gameWindow;
public:
    Game(sf::Vector2f size,std::string title);
    void run();
    ~Game();
};