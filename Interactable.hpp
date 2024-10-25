#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType{
    GOAL,
    EXPERIMENT
};

static int activeInteractableCount;
class Interactable: public GridItem
{
    protected:
        
    public:
        Interactable(int x, int y, int width, int height) {
            posX = x;
            posY = y;
            this->width = width;
            this->height = height;
            activeInteractableCount++;
        }
        Interactable() : Interactable(0,0,0,0) {}

        virtual bool interact(Scientist* player) = 0;
        InteractableType getType() = 0;
        static int getActiveInteractableCount() {return activeInteractableCount}
        ~Interactable() {activeInteractableCount--;}
};


#endif
