#include "Weapon.h"

Weapon::Weapon(std::string defaultFile, std::string fireFile, int screenWidth, int screenHeight) {
    this->screenHeight = screenHeight;
    this->screenWidth = screenWidth;

    this->defaultFile = defaultFile;
    this->fireFile = fireFile;
}
