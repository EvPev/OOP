#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP

#include "Interactable.hpp"
#include "Scientist.hpp"

class Experiment: public Interactable
{
    public:
        Experiment(int x, int y, int width, int height);

        bool interact(Scientist* player);

};
#endif


Experiment::Experiment(int x, int y, int width, int height) {
            posX = x;
            posY = y;
            this->width = width;
            this-> height = height;
        }

        bool Experiment::interact(Scientist* player) {
            if (Helper::manhattanDistance(getCoordinates(), player->getCoordinates()) == 0) {
                player->runExperiment();
            }
            if (player->getExperimentCount() > 3) {
                return true;
            }
            else {return false;}
        }