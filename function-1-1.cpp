#include <iostream>
using namespace std;

int array_sum(int array[], int n) {
    // initialising sum
    int sum = 0;

    // checking if array/n are vaild
    if (n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    
    return sum;
}