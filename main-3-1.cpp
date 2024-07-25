#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[5] = {1, 4, 5, 4, 1};
    if (is_fanarray(array, 5) == true) {
        std::cout << "The array is a fan array" << std::endl;
    } else {
        std::cout << "The array is not a fan array" << std::endl;
    }
}