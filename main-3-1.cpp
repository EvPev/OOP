#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    // initialising size of array
    int n = 0;

    // getting user input for size of array
    cout << "Size of array: ";
    cin >> n;

    // initialising array
    int array[n];

    // filling array
    for (int i = 0; i < n; i++) {
        cout << "array element [" << i+1 << "/" << n << "]: ";
        cin >> array[i];
    }
    
    // calling function and checking the outcome
    if (is_fanarray(array, n) == 1) {
        cout << "The array is a fan array: true\n";
    } else {
        cout << "The array is a fan array: false\n";
    }
   
}