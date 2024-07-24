#include <iostream>
using namespace std;

double weighted_average(int array[], int n) {
    int smallest = array[0], largest = array[0];

    // finding the parameters of the array (largest and smallest numbers)
    for (int i = 1; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // creating an array to track instances of numbers in the array
    int tracking_size = largest - smallest + 1;
    int tracking_array[tracking_size];
    for (int i = 0; i < tracking_size; i++) {
        tracking_array[i] = 0;
    }

    // counting the instances of each number in the array and adding to tracking array
    for (int i = 0; i < tracking_size; i++) {
        for (int j = 0; j < n; j++) {
            if (array[j] == (i + smallest)) {
                tracking_array[i]++;
            }
        }
    }

    // calculating weighted average
    double weighted_av = 0;
    double instances = 0;
    int current_num = smallest;

    for (int i = 0; i < tracking_size; i++) {
        instances = tracking_array[i];
        weighted_av =  weighted_av + ((current_num * instances / n) * instances) ;
        current_num++;
        
    }
    double return_num = weighted_av;

    return return_num;
}

