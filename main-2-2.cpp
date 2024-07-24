#include <iostream>
using namespace std;

int max_element(int array[], int n);

int main() {
    // initialising size of array and biggest number
    int n = 0;
    int biggest_num = 0;

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
    biggest_num = max_element(array, n);

    // printing the biggest number
    cout << "The biggest number in the array is: " << biggest_num << "\n";

    return 0;
}