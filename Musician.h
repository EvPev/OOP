#include <iostream>

using namespace std;

#ifndef MUSICIAN_H
#define MUSICIAN_H


class Musician
{
private:
    string instrument;
    int experience;
public:
    // Constructors
    Musician(string instrument, int experience)
    {
        this->instrument = instrument;
        this->experience = experience;
    };
    Musician() : Musician("null", 0) {}

    // Destructors
    ~Musician();


    //Access
    string get_instrument() {return instrument;}
    void set_instrument(string instrument) {this->instrument = instrument;}

    int get_experience() {return experience;}
    void set_experience(int experience) {this->experience = experience;}


};

Musician::~Musician(){}

#endif