#include <iostream>

extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {1, 3, 3, 3, 6};
    std::cout << num_count(array, 5, 3) << std::endl;
}