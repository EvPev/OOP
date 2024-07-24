#include <iostream>
using namespace std;

int count_evens(int number) {
    // check if number is valid
    if (number < 1) {
        return 0;
    }

    // initiating evens variable
    int evens = 0;

    // checking for evens between 1 and number
    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            evens++;
        }
    }

    // returning number of evens
    return evens;
}