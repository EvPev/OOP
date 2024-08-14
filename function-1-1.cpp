#include <iostream>

using namespace std;

int* readNumbers()
{
    int* array = new int[10];
    cout << "Enter 10 numbers" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number [" << i+1 << "/10]: ";
        cin >> array[i];
    }

    return array;
}

void printNumbers(int* array, int length) 
{
    for(int i = 0; i < length; i++) 
    {
        cout << i << " " << array[i] << endl;
    }
}