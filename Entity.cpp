#include <iostream>
#include "Entity.h"

using namespace std;

Entity::Entity(int px, int py) {this->px = px; this->py = py;}
Entity::Entity() : Entity(0,0){}
Entity::~Entity() {}

void Entity::set_px(int px){this-> px = px;}
void Entity::set_py(int py){this->py = py;}

int Entity::get_px() {return px;}
int Entity::get_py() {return py;}
