#ifndef HELPER_HPP
#define HELPER_HPP

#include <utility>
#include <cmath>

class Helper
{
   static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        int dist = abs(item1.first - item2.first) + abs(item1.second - item2.second);
        return dist;
   }

};

#endif

