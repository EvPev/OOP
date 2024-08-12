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

    for (int i = 0; i < n; i++) {
        cout << list.people[i].name << "|";
        cout << list.people[i].age  << endl;
    }

}