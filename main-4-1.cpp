#include <iostream>

using namespace std;

extern int* readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main() {
    int length = 10;
    int* array = readNumbers();
    int secondSmallest = secondSmallestSum(array, length);

    cout << "The second smallest sum is: " << secondSmallest << endl;

    delete[] array;
}