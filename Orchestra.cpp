#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

using namespace std;

// Constructors
Orchestra::Orchestra(int size)
{
    this->size = size; 
    memberArray = new Musician[size];
}

Orchestra::Orchestra() : Orchestra(0) {}

// Destructors
Orchestra::~Orchestra()
{
    delete[] memberArray;
}


// Access
int Orchestra:: get_size() {return size;}

int Orchestra:: get_current_number_of_members()
{
    int currentMembers = 0;

    for (int i = 0; i < size; i++)
    {
        if (memberArray[i].get_instrument() != "null")
            {
                currentMembers++;
            }
    }
    return currentMembers;
}

bool Orchestra:: add_musician(Musician new_musician) 
{
    for (int i = 0; i < size; i++)
    {
        if (memberArray[i].get_instrument() == "null")
        {
            memberArray[i].set_instrument(new_musician.get_instrument());
            memberArray[i].set_experience(new_musician.get_experience());
            return true;
        }
    }
    return false;         
}

bool Orchestra:: has_instrument(string checkedInstrument)
{
    for (int i = 0; i < size; i++)
    {
        if (memberArray[i].get_instrument() == checkedInstrument)
        {
            return true;
        }
    }
    return false;
}

Musician* Orchestra::get_members() {return memberArray;}

