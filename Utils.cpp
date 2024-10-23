#include "Utils.h"
#include <random>
#include <cmath>

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrWidth(0, (gridWidth - 1));

    int pos1 = distrWidth(gen);

    std::uniform_int_distribution<> distrHeight(0, (gridHeight - 1));

    int pos2 = distrHeight(gen);

    std::tuple<int,int> pos = std::make_tuple(pos1, pos2);

    return pos;
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {\
    double dist = (pow(std::get<0>(pos1) - std::get<0>(pos2),2)) + (pow(std::get<1>(pos1) - std::get<1>(pos2),2));
    dist = sqrt(dist);
    return dist;
}