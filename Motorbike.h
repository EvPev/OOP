#pragma oncce
#include <iostream>

using namespace std;

class Motorbike: public Vehicle
{
    private:

    public:
        Motorbike();
        Motorbike(int ID);
        int getParkingDuration();

};
