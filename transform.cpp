#include <iostream>
#include <math.h>

using namespace std;


// 10 to B
void print_binary_str(int number) {
    int working_num = number;
    int binary_array[30] = {0};

    for (int i = 0; i < 30; i++) {
        if (working_num % 2 == 1) {
            binary_array[29 - i] = 1;
        }
        working_num = floor(working_num / 2);
        if (working_num == 0) {
            break;
        }
    }

    int new_start = 0;
    for (int i = 0; i < 30; i++) {
        if (binary_array[i] == 1) {
            new_start = i;
            break;
        }
    }

    cout << number << " in binary is: ";

    for (int i = new_start; i < 30; i++) {
        cout << binary_array[i];
    }
    cout << endl;
}


// ----------------------------------
// B to 10

void binary_to_int(int binary[], int number_of_digits) {

    int sum = 0;

    for (int i = 0; i < number_of_digits; i++) {
        if (binary[number_of_digits - 1 - i] == 1) {
            double di = i;
            sum = sum + pow(2,di);
        }
    }

    for (int i = 0; i < number_of_digits; i++) {
        cout << binary[i];
    }
    cout << " in decimal form is: " << sum << endl;
}


// ---------------------------------------
// 10 to 8





int main() {
    int number = 75;

    int b_number[] = {1,1,0,1,1,1,0,1,1};
    int b_length = 9;

    print_binary_str(number);
    binary_to_int(b_number, b_length);
}


