#include <iostream>
using namespace std;

extern int count_evens(int number);

int main() {
    // initiating number variable and number of evens variable
    int evens = 0;
    int number = 0;

    // getting input for number
    cout << "maximum number: ";
    cin >> number;

    // calling funciton
    evens = count_evens(number);

    // printing number of evens
    cout << "there are " << evens << " evens betrween 1 and " << number << "\n";
}