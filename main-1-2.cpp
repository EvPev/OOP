#include <iostream>

using namespace std;

extern void modifyArray(double* array, int size, double value);

int main() {
    int size = 10;
    double* array = new double[size]();

    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    double value = 5;

    modifyArray(array, size, value);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}