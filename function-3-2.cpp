#include <iostream>

int median_array(int array[], int n) {
    int median;
    if (n < 1 || (n % 2) == 0) {
        return 0;
    }
    std::sort(array, array+n);
    median = array[n/2];
    return median;
}