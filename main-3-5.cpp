#include <iostream>

extern double sum_even(double array[], int n);

int main() {
    double array[6] = {3,4,5,7,1,9};
    std::cout << "The sum of the elements in even positions is: " << sum_even(array, 6) << std::endl;
}