#ifndef MINE_H
#define MINE_H
#include <iostream>
#include "GameEntity.h"
#include "Explosion.h"

using namespace std;

class Mine: public GameEntity
{
    public:
        Mine(int x, int y);
        Explosion explode();
};

#endif