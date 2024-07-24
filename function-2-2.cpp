#include <iostream>
using namespace std;

int max_element(int array[], int n) {
    // checking if the array size is valid
    if (n < 1) {
        return 0;
    }

    // initiating biggest_num variable
    int biggest_num = array[0];

    // checking if there is a bigger number
    for (int i = 1; i < n; i++) {
        if (array[i] > biggest_num) {
            biggest_num = array[i];
        }
    }

    // returning the biggest number
    return biggest_num;
}