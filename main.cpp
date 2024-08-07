#include <iostream>
#include "workshop.h"

using namespace std;

int main() {
    
    // Q1
    {
        doublechar();
        cout << "\n\n";
    }

    // Q2 changeValue 
    {
        double d_num = 0;
        double* d_num_ptr = &d_num;
        changeValue(d_num_ptr);
        cout << "[ChangeValue] \nValue: " << d_num << "\n\n";
    }


    // Q3 printArray
    {
        cout << "[PrintArray]" << endl;
        int size = 10;
        double* array = new double[size]();
        printArray(array, size);
        cout << "\n\n";

        delete[] array;
    }

    // Q4 arrayMax
    {
        cout << "[ArrayMax]" << endl;
        int size = 10;
        double* array = new double[size]();

        double max = arrayMax(array, size);

        cout << "The max value is: " << max << endl;
    }

    // Q5 & Q6 & Q7 & Q8 dynamicArray
    {   
        cout << "\n[dynamicArray]\n";
        int n = 10;
        double m = 10;
        double* array = dynamicArray(n, m);

        double max = arrayMax(array, n);
        cout << "The max value is: " << max << endl;

        printArray(array, n);

        delete[] array;
        cout << endl;
    }
}
