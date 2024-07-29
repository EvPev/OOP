#include <iostream>
using namespace std;

extern void print_binary_str(string decimal_number);

int main() {
    int decimal_number = -1;
    
    while (decimal_number > 999999999 || decimal_number < 0) {
        cout << "Input a number: ";
        cin >> decimal_number;
        cout << endl;
    }

    string decimal_string = to_string(decimal_number);

    print_binary_str(decimal_string);
}