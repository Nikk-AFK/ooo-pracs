#include <iostream>

extern int * readNumbers();
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int * reverseArray(int *numbers1,int length);


int main() {
    int * ptr1 = readNumbers();
    int * ptr2 = reverseArray(ptr1, 10);
    std::cout << equalsArray(ptr1, ptr2, 10) << std::endl;
    delete[] ptr1;
    delete[] ptr2;
    return 0;
}
