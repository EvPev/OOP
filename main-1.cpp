#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#define print(x) std::cout << x << std::endl;

int main() {
    std::tuple pos1= Utils::generateRandomPos(10,10);
    std::tuple pos2= Utils::generateRandomPos(10,10);
    GameEntity E1(std::get<0>(pos1), std::get<1>(pos1), GameEntity::NoneType);
    GameEntity E2(std::get<0>(pos2), std::get<1>(pos2), GameEntity::NoneType);

    double dif = 0;

    dif = Utils::calculateDistance(E1.getPos(), E2.getPos());

    print(dif);
}