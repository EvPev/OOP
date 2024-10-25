#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"



class Goal: public Interactable
{
    public:
        Goal(int width, int height);
        bool interact(Scientist* player);
};      


#endif

    
Goal::Goal(int width, int height) {
    this->width = width;
    this->height = height;
}
bool Goal::interact(Scientist* player) {
    if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0  &&
    player->getExperimentCount() >= 1) {
        return true;
    }
    else {
        return false;
    }
}