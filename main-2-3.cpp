#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int array[6] = {2, 2, 2, 5, 9, 9};
    two_five_nine(array, 6);
}