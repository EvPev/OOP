#include <iostream>
#include "Musician.h"

using namespace std;

int main()
{
    Musician a;

    

    cout << a.get_Instrument() << " " << a.get_Experience() << endl;

    a.set_Instrument("test");
    a.set_Experience(10);

    cout << a.get_Instrument() << " " << a.get_Experience() << endl;
}