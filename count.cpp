#include <iostream>
using namespace std;

int count(int array[], int n) {

    int evens_count = 0;
    for (int i = 0; i < n; i++) {

        if (array[i] % 2 == 0) {
            evens_count++;
        }
    }
    return evens_count;
}