#include <iostream>

extern bool is_descending(int array[], int n);

int main() { 
    int array[5] = {1, 7, 8, 9, 17};
    std::cout << is_descending(array, 5) << std::endl;
}