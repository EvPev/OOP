#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Entity.h"
#include <SFML/Graphics.hpp>

using namespace std;

class Player: public Entity
{
    public:
        Player(int px, int py);
        Player();   
        ~Player();

    

};

#endif