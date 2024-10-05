#include <iostream>
#include "Weapon.h"

Weapon::Weapon(int fireRate) {this->fireRate = fireRate;}
Weapon::~Weapon();

void Weapon::fire() = 0;