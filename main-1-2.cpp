#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main() 
{
    int n = 0;
    cout << "No. of people: ";
    cin >> n;
    cout << endl;

    PersonList list = createPersonList(n);



}
