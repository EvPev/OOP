#include <iostream>
#include "Player.h"

using namespace std;

#ifndef WIZARD_H
#define WIZARD_H

class Wizard: public Player
{
    private:
        int mana;

    public:
        Wizard(string name, int health, int damage, int mana);

        void castSpell(Player* opponent);

        int getMana();

        void setMana(int mana);
};


#endif