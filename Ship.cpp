#include "Ship.h"

Ship::Ship(int x, int y) : GameEntity(x, y, GameEntity::ShipType) {}

void Ship::move(int dx, int dy) {
    position = std::make_tuple((std::get<0>(position) + dx),(std::get<1>(position) + dy));
}