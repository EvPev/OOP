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
        Orchestra(int size)
        {
            this->size = size;
            memberArray = new Musician[size];
        }
        Orchestra() : Orchestra(0) {}

    // Destructors
        ~Orchestra()
        {
            delete[] memberArray;
        }


    // Access
        int get_size() {return size;}

        int get_current_number_of_members()
        {
            int currentMembers = 0;

            for (int i = 0; i < size; i++)
            {
                if (memberArray[i].get_Instrument() != "null")
                {
                    currentMembers++;
                }
            }
            return currentMembers;
        }

        bool add_musician(Musician new_musician) 
        {
            for (int i = 0; i < size; i++)
            {
                if (memberArray[i].get_Instrument() == "null")
                {
                    memberArray[i].set_Instrument(new_musician.get_Instrument());
                    memberArray[i].set_Experience(new_musician.get_Experience());
                    return true;
                }
            }
            return false;         
        }

};


#endif