#include <iostream>
#include <cmath>
#define print(x) std::cout << x << std::endl

double posX = 11;
double posY = 10;
double pPosX = 10;
double pPosY = 10;
double pDirX = 10;
double pDirY = 9;




int main() {
    double ABBCDot = ((posX - pPosX) * (pDirX - pPosX)) + ((posY - pPosY) * (pDirY - pPosY));

    double ABBCDist = ((abs(pPosX - posX)) + (abs(pPosY - posY))) * ((abs(pPosX - pDirX)) + (abs(pPosY - pDirY)));

    double Angle = acos(ABBCDot / ABBCDist);


    print(Angle);

    double c = (1.0/3);
    print(c);
}



   
