#include <iostream>

using namespace std;

extern double* duplicateArray(double* array, int size);

int main () {
    int size = 10;
    double* array = new double[size]();

    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }

    double* new_array = duplicateArray(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << new_array[i] << " ";
    }
    cout << endl;

}
