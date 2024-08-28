#include <iostream>
#include "player.h"
#include "wizard.h"

using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name, health, damage)
{
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) 
{
    attack(opponent, mana);
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}

int Wizard::getMana() {return mana;}

void Wizard::setMana(int mana) {this->mana = mana;}