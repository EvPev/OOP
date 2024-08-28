#include <iostream>

using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    protected:
        string name;
        int health;
        int damage;

    public:
        Player(string name, int health, int damage);
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);

        int getHealth();
        int getDamage();
        string getName();

        void setHealth(int health);
        void setDamage(int damage);
        void setName(string name);
};
#endif