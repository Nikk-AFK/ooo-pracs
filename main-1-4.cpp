#include <iostream>

extern int num_count(int array[], int secondarray[], int n);

int main() {
    int array[4] = {2, 6, 3, 7};
    int array2[4] = {1, 5, 2, 1};

    std::cout << num_count(array, array2, 4) << std::endl;
}