#include <iostream>
using namespace std;

void two_five_nine(int array[], int n) {
    // initiating counters
    int twos = 0, fives = 0, nines = 0;

    // loop to check for 2s 5s and 9s
    for (int i = 0; i < n; i++) {
        switch(array[i]) {
            case 2:
                twos++;
                break;
            case 5:
                fives++;
                break;
            case 9:
                nines++;
                break;
        }
    }
    cout << "2:" << twos << ";5:" << fives << ";9:" << nines << ";\n";
}