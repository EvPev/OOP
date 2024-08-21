#include "Musician.h"

using namespace std;

Musician::Musician() : Musician("null", 0) {}

Musician::Musician(string instrument, int experience) 
{
    this->instrument = instrument;
    this->experience = experience;
}

string Musician::get_instrument() {return instrument;}
void Musician::set_instrument(string instrument) {this->instrument = instrument;}


int Musician::get_experience() {return experience;}
void Musician::set_experience(int experience) {this->experience = experience;}
