#ifndef SHIP_H
#define SHIP_H

#include <vector>
#include <tuple>
#include "GameEntity.h"

class Ship: public GameEntity {
    private:
        

    public:
        void move(int dx, int dy);
        Ship(int x, int y);

};

#endif