#include <iostream>

using namespace std;

void doublechar() {
    double double_v = 10;
    char char_v = 'a';

    double* double_ptr = &double_v;
    char* char_ptr = &char_v;

    cout << "Double | Num: " << double_v << " Address: " << double_ptr << endl;

    cout << "Char | Character: " << char_v << " Address: " << char_ptr << endl;
}


void changeValue(double* ptr) {

    *ptr = 42;
}

// Q3 printArray
void printArray(double* ptr, int size) {
    for (int i = 0; i < size; i++) 
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

// Q4 arrayMax
double arrayMax(double* array, int size) {
    double max = array[0];
    for(int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

// Q5 & Q6 & Q7 dynamicArray
double* dynamicArray(int n, double m) {

    double* array = new double[n]();
    
    for (int i = 0 ; i < n; i++)
    {
        array[i] = m;
    }

    return array;
}
