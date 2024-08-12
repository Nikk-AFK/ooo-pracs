#include <iostream>

extern int * readNumbers();
extern void printNumbers(int *numbers,int length);

int main() {
    int * ptr = readNumbers();
    printNumbers(ptr, 10);

    delete[] ptr;
    return 0;
}
