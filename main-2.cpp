#include "GridItem.hpp"
#include "Helper.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"
#include "Experiment.hpp"
#include <iostream>
#define print(x) std::cout << x << std::endl;

int main() {

    GridItem player(1,1,2,2);
    print(player.getActiveGridItemCount());
}