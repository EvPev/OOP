#include <iostream>
#include <cmath>

using namespace std;

int binary_to_int(int binary_digest[], int number_of_digits) {

    int sum = 0;

    for (int i = 0; i < number_of_digits; i++) {
        if (binary_digest[number_of_digits - 1 - i] == 1) {
            double di = i;
            sum = sum + pow(2,di);
            cout << sum<<endl;
        }
        
    }
    return sum;
}
