#include <iostream>

extern int sum_diagonal(int array[4][4]);

int main() {
    int arr[4][4] = {{3, 4, 5, 6}, {4, 3, 2, 1}, {3, 5, 7, 4}, {5, 2, 1, 6}};
    std::cout << sum_diagonal(arr) << std::endl;
}
