#include "GridItem.hpp"
#include "Helper.hpp"
#include <iostream>
#define print(x) std::cout << x << std::endl;

int main() {

    GridItem player(1,1,2,2);
    GridItem pla3er(1,2,2,3);
    print(GridItem::getActiveGridItemCount());
}