#ifndef SCIENTIST_HPP
#define SCIENTIST_HPP

#include "GridItem.hpp"

class Scientist: public GridItem
{
    protected:
        int experimentCount;
    public:
        Scientist(int gridWidth, int gridHeight) {
            width = gridWidth;
            height = gridHeight;
            posX = 0;
            posY = 0;
            experimentCount = 0;
        }

        int getExperimentCount() {return experimentCount;}
        void runExperiment() {experimentCount++;}

        bool move(int xOffset, int yOffset){
            if (xOffset <= 2 && yOffset <= 2) {
                posX = posX + xOffset;
                posY = posY + yOffset;
            }
        }
};


#endif
