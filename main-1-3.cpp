#include <iostream>

extern int count_digits(int array[4][4]);

int main() {
    int arr[4][4] = {{3, 0, 5, 9}, {4, 7, 2, 1}, {3, 2, 7, 4}, {5, 2, 1, 8}};
    count_digits(arr);
}
