#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    Person * arr = createPersonArray(4);
    std::cout << arr[1].name << " " << arr[1].age << std::endl;
    delete[] arr;
}
