#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main() {
    // initialising size of array and smallest number
    int n = 0;
    int smallest_num = 0;

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

    // calling function
    smallest_num = min_element(array, n);

    // printing the smallest number
    cout << "The smalest number in the array is: " << smallest_num << "\n";

    return 0;
}