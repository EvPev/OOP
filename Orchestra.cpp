#include <iostream>
#include "Orchestra.h"

using namespace std;

int main() 
{
    Orchestra a(20);

    cout << "Max members: " << a.get_size() << endl;
    cout << "current members: " << a.get_current_number_of_members() << endl;


    Musician tempM;
    string instrumentTemp;
    int b;
    cout << "Add musician\nInstrument: ";
    cin >> instrumentTemp;
    tempM.set_Instrument(instrumentTemp);

    cout << "Experience: ";
    cin >> b;
    tempM.set_Experience(b);

    bool addTrue = a.add_musician(tempM);
    

    if (addTrue == 1) {cout << "Musician added" << endl;}
    else if (addTrue == 0) {cout << "Orchestra Full" << endl;}
}