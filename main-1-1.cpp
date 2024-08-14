#include <iostream>

using namespace std;

extern int* readNumbers();
extern void printNumbers(int* array, int length);

int main()
{
    int length = 10;
    int* array = readNumbers();

    printNumbers(array, length);
    delete[] array;
}
