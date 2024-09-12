#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Entity.h"

using namespace std;

class Player: public Entity
{
    Player(int px, int py);
    Player();   
    ~Player();


};

#endif