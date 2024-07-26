#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[4] = {2, 6, 3, 7};
    int array2[4] = {1, 5, 2, 1};

    std::cout << sum_two_arrays(array, array2, 4) << std::endl;
}