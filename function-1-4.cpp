#include <iostream>

int num_count(int array[], int secondarray[], int n) {
    int sum_arr = 0;
    if (n < 1) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        sum_arr = sum_arr + array[i] + secondarray[i];
    }
    return sum_arr;
}