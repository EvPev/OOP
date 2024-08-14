#include <iostream>

using namespace std;

extern int* readNumbers();
extern void hexDigets(int* array, int length);

int main()
{
    int length = 10;
    int* array = readNumbers();

    hexDigets(array, length);
    delete[] array;
}
