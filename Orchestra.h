#include <iostream>
#include "Musician.h"

using namespace std;

#ifndef ORCHESTRA_H
#define ORCHESTRA_H



class Orchestra
{
    private:
        int size;
        Musician* memberArray;

    public:
    // Constructors
        Orchestra(int size);
        Orchestra();

    // Destructors
        ~Orchestra();
        


    // Access
    int get_current_number_of_members();
    int get_size();
    bool add_musician(Musician new_musician);
    bool has_instrument(string checkedInstrument);
    Musician* get_members();
};


#endif