#include <iostream>
#include <cmath>

int binary_to_int (int binary_digits[], int number_of_digits) {
    int integer_sum = 0;
    for (int i = 0; i < number_of_digits; i++) {
        integer_sum += (binary_digits[i] * pow(2, number_of_digits - i - 1));
    }
    return integer_sum;
}