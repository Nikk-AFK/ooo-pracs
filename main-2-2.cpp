#include <iostream>

extern int max_element(int array[], int n);

int main() { 
    int array[5] = {2, 4, 1, 19, 12};
    std::cout << max_element(array, 5) << std::endl;
}