#include <iostream>

using namespace std;

extern int* readNumbers(int length);
extern int secondSmallestSum(int *numbers,int length);

int main() {
    cout << "Enter Length: ";
    int length = 0;
    cin >> length;
    int* array = readNumbers(length);
    int secondSmallest = secondSmallestSum(array, length);

    cout << "The second smallest sum is: " << secondSmallest << endl;

    delete[] array;
}
