#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

using namespace std;

class Musician {
private:
    string instrument;
    int experience;
    

public:
    Musician();
    Musician(string instrument, int experience);
    string get_instrument();
    void set_instrument(string instrument);

    int get_experience();
    void set_experience(int experience);
};

#endif
