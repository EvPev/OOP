#include <iostream>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#define print(x) std::cout << x << std::endl;

int main() {
    Utils A;
    GameEntity E1(0, 0, GameEntity::NoneType);
    GameEntity E2(1, 1, GameEntity::NoneType);

    double dif = 0;

    dif = A.calculateDistance(E1.getPos(), E2.getPos());

    print(dif);
}