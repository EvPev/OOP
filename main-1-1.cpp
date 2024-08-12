#include <iostream>
#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main() {
    int n = 0;
    cout << "No. of people: ";
    cin >> n;
    cout << endl;

    Person* array = nullptr;
    array = createPersonArray(n);

    for (int i = 0; i < n; i++) {
        cout << array[i].name << "|";
        cout << array[i].age  << endl;
    }

}