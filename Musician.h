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
    string get_Instrument() {return instrument;}
    void set_Instrument(string instrument) {this->instrument = instrument;}

    int get_Experience() {return experience;}
    void set_Experience(int experience) {this->experience = experience;}


};

Musician::~Musician(){}

#endif