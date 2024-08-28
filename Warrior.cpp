#include <iostream>
#include "Player.h"
#include "Warrior.h"

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) : Player(name, health, damage)
{
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent)
{
    attack(opponent, damage);
    cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
}

string Warrior::getWeapon() {return weapon;}

void Warrior::setWeapon(string weapon) {this->weapon = weapon;}