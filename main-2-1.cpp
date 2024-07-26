#include <iostream>

extern int min_element(int array[], int n);

int main() { 
    int array[5] = {2, 4, 1, 19, 12};
    std::cout << min_element(array, 5) << std::endl;
}