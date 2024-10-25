#include "Mine.h"
#include "GameEntity.h"
#include "Explosion.h"

Mine::Mine(int x, int y) : GameEntity(x, y, GameEntity::MineType) {}

Explosion Mine::explode() {return Explosion(-1,-1);}