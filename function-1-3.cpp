#include <iostream>
using namespace std;

int num_count(int array[], int n, int number) {
    // checking if the size of the array is valid
    if (n < 1) {
        return 0;
    }
    
    // initiating matches variable
    int matches = 0;
    
    // Check the elements of the array for matches to number
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            matches++;
        }
    }

    // Return maches
    return matches;
}