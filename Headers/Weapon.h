#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

using namespace std;

class ClassName
{
    protected:
        int fireRate; 
    public:
        Weapon(int fireRate);
        ~Weapon();
        virtual void fire();

};

#endif
