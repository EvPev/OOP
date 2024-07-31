#include <iostream>
#include <cmath>

using namespace std;

// b to 10
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


// b addition
int b_arithmatic(int b_num_1[], int b_num_2[], int num_1_size, int num_2_size) {
    int higher_size = 0;
    int smalled_size = 0;
    

    if (num_1_size >= num_2_size){
        higher_size = num_1_size;
        smalled_size = num_2_size;
    } else {
        higher_size = num_2_size;
        smalled_size = num_1_size;
    }

    int combined_array[higher_size + 1] = {0};

    for (int i = 0; i < higher_size; i++) {
        if (i < smalled_size) {
            combined_array[higher_size + 1 - 1 - i] = b_num_1[num_1_size - 1 - i] + b_num_2[num_2_size - 1 - i];          
        } else if (num_1_size > num_2_size) {
            combined_array[higher_size + 1 - 1 - i] = b_num_1[num_1_size - 1 - i];
        } else if (num_2_size > num_1_size) {
            combined_array[higher_size + 1 - 1 - i] = b_num_2[num_2_size - 1 - i];
        }
    }

    for (int i = 0; i < higher_size; i++) {
        if ((combined_array[higher_size + 1 - 1 - i]) == 2) {
            combined_array[higher_size + 1 - 1 - i] = 0;
            combined_array[higher_size + 1 - 2 - i] = combined_array[higher_size + 1 - 2 - i] + 1;
        }

        if ((combined_array[higher_size + 1 - 1 - i]) == 3) {
            combined_array[higher_size + 1 - 1 - i] = 1;
            combined_array[higher_size + 1 - 2 - i] = combined_array[higher_size + 1 - 2 - i] + 1;
        }

    }

    for (int i = 0; i < num_1_size; i++) {
        cout << b_num_1[i];
    }
    cout << " plus ";
    
    for (int i = 0; i < num_2_size; i++) {
        cout << b_num_2[i];
    }

    cout << " is: ";

    for (int i = 0; i < higher_size + 1; i++) {
        cout << combined_array[i];
    }
    cout << endl;

    binary_to_int(combined_array, higher_size + 1);

    return 0;
}

// B subtraction
// int b_arithmatic(int b_num_1[], int b_num_2[], int num_1_size, int num_2_size) {
//     int higher_size = 0;
//     int smalled_size = 0;
    

//     if (num_1_size >= num_2_size){
//         higher_size = num_1_size;
//         smalled_size = num_2_size;
//     } else {
//         higher_size = num_2_size;
//         smalled_size = num_1_size;
//     }

//     int combined_array[higher_size + 1] = {0};

//     for (int i = 0; i < higher_size; i++) {
//         if (i < smalled_size) {
//             combined_array[higher_size + 1 - 1 - i] = b_num_1[num_1_size - 1 - i] - b_num_2[num_2_size - 1 - i];          
//         } else if (num_1_size > num_2_size) {
//             combined_array[higher_size + 1 - 1 - i] = b_num_1[num_1_size - 1 - i];
//         } else if (num_2_size > num_1_size) {
//             combined_array[higher_size + 1 - 1 - i] = b_num_2[num_2_size - 1 - i];
//         }
//     }


//     for (int i = 0; i < higher_size; i++) {
//         if ((combined_array[higher_size + 1 - 1 - i]) == -1) {
//             combined_array[higher_size + 1 - 2 - i] = combined_array[higher_size + 1 - 2 - i] - 1;
//             combined_array[higher_size + 1 - 1 - i] = 1;
//         }

//         if ((combined_array[higher_size + 1 - 1 - i]) == 2) {
//             combined_array[higher_size + 1 - 1 - i] = 1;
//             combined_array[higher_size + 1 - 2 - i] = combined_array[higher_size + 1 - 2 - i] + 1;
//         }

//     }

//     for (int i = 0; i < num_1_size; i++) {
//         cout << b_num_1[i];
//     }
//     cout << " plus ";
    
//     for (int i = 0; i < num_2_size; i++) {
//         cout << b_num_2[i];
//     }

//     cout << " is: ";

//     for (int i = 0; i < higher_size + 1; i++) {
//         cout << combined_array[i];
//     }
//     cout << endl;

//     binary_to_int(combined_array, higher_size + 1);

//     return 0;
// }




int main() {
    int b_num_1[] = {1,1,1,0,1,1,1,0,1,0,1,1};
    int num_1_size = 12;
    int b_num_2[] = {1,1};
    int num_2_size = 2;

    b_arithmatic(b_num_1, b_num_2, num_1_size, num_2_size);
}