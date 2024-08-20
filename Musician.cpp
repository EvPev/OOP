#include <iostream>
#include "Musician.h"

using namespace std;

int main()
{
    Musician a;

    

    cout << a.get_instrument() << " " << a.get_experience() << endl;

    a.set_instrument("test");
    a.set_experience(10);

    cout << a.get_instrument() << " " << a.get_experience() << endl;
}