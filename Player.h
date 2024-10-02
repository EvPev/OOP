#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Entity.h"

using namespace std;

class Player: public Entity
{
    public:
        Player(int r, int x, int y);
        ~Player();

    

};

#endif