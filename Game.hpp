#ifndef GAME_HPP
#define GAME_HPP

#include "Interactable.hpp"
#include "Scientist.hpp"

class Game: public Interactable
{
    public:
        enum GameState {
            WIN,
            LOSE,
            Playing
        };
    protected:
        int* grid;
        Scientist player;
    public:
        Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates);
}


#endif

        Game::Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates) {
            grid = grid[height,width];
            Scientist player(1,1);
        }