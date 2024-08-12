#include <iostream>

extern int * readNumbers();
extern int secondSmallestSum(int *numbers,int length);

int main() {
    int * ptr = readNumbers();
    std::cout << secondSmallestSum(ptr, 4) << std::endl;

    delete[] ptr;
    return 0;
}
