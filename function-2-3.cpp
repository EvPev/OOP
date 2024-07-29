#include <iostream>
using namespace std;




bool is_palindrome(int integers[], int length) {
    
    bool p_true = 1;

    for (int i = 0; i < length; i++) {
        if (integers[i] != integers[length - 1 - i]) {
            p_true = 0;
            
        }
    }

    return p_true;
}

int sum_array_elements(int integers[], int length) {
        int sum = 0;

    for (int i = 0; i < length; i++) {
        sum = sum + integers[i];
    }

    return sum;
}

int sum_if_palindrome(int integers[], int length) {

    if (length <= 0) {
        return -1;
    }

    if (is_palindrome(integers, length) == 0) {
        return -2;
    }

    return sum_array_elements(integers, length);
}