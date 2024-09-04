#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "AirFleet.h"
using namespace std;

AirFleet::AirFleet(){
    fleet = new AirCraft*[5];

    AirCraft* a1 = new Airplane (20, 10);
    AirCraft* a2 = new Helicopter(10000, "BlackHawk"); 
    AirCraft* a3 = new AirCraft(5000);
    AirCraft* a4 = new Helicopter(100, "WhiteHawk");
    AirCraft* a5 = new Airplane(15, 20);

    fleet[0] = a1;
    fleet[1] = a2;
    fleet[2] = a3;
    fleet[3] = a4;
    fleet[4] = a5;
}

AirCraft **AirFleet::get_fleet(){return fleet;}