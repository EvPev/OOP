#include "GameEntity.h"
#include <tuple>

GameEntity::GameEntity(int x, int y, GameEntityType type) {
    position = std::make_tuple(x,y);
    this->type = type;
}

std::tuple<int,int> GameEntity::getPos() {return position;}

GameEntity::GameEntityType GameEntity::getType() {return type;}