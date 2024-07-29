#include <iostream>
using namespace std;

extern int binary_to_int(int binary_digest[], int number_of_digits);

int main() {
    // initialising size of array
    int n = 0;

    // getting user input for size of array
    cout << "Binary digits: ";
    cin >> n;

    // initialising array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "[" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }

    int number = binary_to_int(array,n);

    cout << "Decimal form is: " << number << endl;

    return 0; 
}