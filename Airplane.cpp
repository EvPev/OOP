#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

using namespace std;

Airplane::Airplane(): Airplane(0,0){}                      
Airplane::Airplane(int w, int p): AirCraft(w) {numPassengers = p;}

void Airplane::reducePassengers(int x) {
    numPassengers = numPassengers - x;
    if (numPassengers < 0) {numPassengers = 0;}
    }
int Airplane::get_numPassengers() {return numPassengers;} 
        
void Airplane::fly(int headwind, int minutes){
    float tempFuel = fuel;
    if (headwind >= 60) {tempFuel -= 0.5 * minutes;}
    else if (headwind < 60) {tempFuel -= 0.3 * minutes;}
    tempFuel -= (0.001 * numPassengers * minutes);
    if (tempFuel >= 20) {fuel = tempFuel; numberOfFlights++;}
}



