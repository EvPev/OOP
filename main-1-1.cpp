#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main() {
    int size = 10;
    double* array = new double[size]();

    for (int i = 0; i < size; i++)
    {
        array[i] = i+10;
    }
    double min = arrayMin(array, size);

    cout << "Min value is: " << min << endl;
}