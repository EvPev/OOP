#include <iostream>
#include <math.h>
using namespace std;

void print_binary_str(string decimal_number) {
    int number = stoi(decimal_number);
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

    for (int i = new_start; i < 30; i++) {
        cout << binary_array[i];
    }

    cout << endl;
}