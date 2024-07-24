#include <iostream>
using namespace std;

int min_element(int array[], int n) {
    // checking if the array size is valid
    if (n < 1) {
        return 0;
    }

    // initiating smallest_num variable
    int smallest_num = array[0];

    // checking if there is a smaller number
    for (int i = 1; i < n; i++) {
        if (array[i] < smallest_num) {
            smallest_num = array[i];
        }
    }

    // returning the smallest number
    return smallest_num;
}