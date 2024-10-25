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
        Interactable(int x, int y, int width, int height);
        }
        Interactable();

        virtual bool interact(Scientist* player) = 0;
        InteractableType getType() = 0;
        static int getActiveInteractableCount();
        ~Interactable();
};


#endif


  Interactable::Interactable(int x, int y, int width, int height) {
            posX = x;
            posY = y;
            this->width = width;
            this->height = height;
            activeInteractableCount++;
        }
        Interactable::Interactable() : Interactable(0,0,0,0) {}

         bool Interactable:interact(Scientist* player) = 0;
        Interactable::int getActiveInteractableCount() {return activeInteractableCount}
        Interactable::~Interactable() {activeInteractableCount--;}