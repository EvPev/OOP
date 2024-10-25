#ifndef SCIENTIST_HPP
#define SCIENTIST_HPP

#include "GridItem.hpp"

class Scientist: public GridItem
{
    protected:
        int experimentCount;
    public:
        Scientist(int gridWidth, int gridHeight);
        }

        int getExperimentCount();
        void runExperiment();

        bool move(int xOffset, int yOffset);
};


#endif

Scientist::Scientist(int gridWidth, int gridHeight) {
            width = gridWidth;
            height = gridHeight;
            posX = 0;
            posY = 0;
            experimentCount = 0;
        }

        int Scientist::getExperimentCount() {return experimentCount;}
        void Scientist::runExperiment() {experimentCount++;}

        bool Scientist::move(int xOffset, int yOffset){
            if (xOffset <= 2 && yOffset <= 2) {
                posX = posX + xOffset;
                posY = posY + yOffset;
            }
        }