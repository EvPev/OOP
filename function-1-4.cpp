#include <iostream>
using namespace std;

int sum_two_arrays(int array[], int secondarray[], int n) {
    // Check if array size is valid
    if (n < 1) {
        return 0;
    }

    // initiate sum
    int sum = 0;

    // calculate sum
    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
        sum = sum + secondarray[i];
    }

    return sum;
}