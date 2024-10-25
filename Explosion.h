#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <iostream>
#include "Effect.h"
#include "GameEntity.h"

using namespace std;

class Explosion : public GameEntity, public Effect
{
    public:
        Explosion(int x, int y);
        void apply(GameEntity& entity);
};

#endif