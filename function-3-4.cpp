#include <iostream>

int *readNumbers() {
    int * arr = new int[4];
    for (int i = 0; i < 4; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

int secondSmallestSum(int *numbers,int length) {
    if (length < 1) {
        return 0;
    }
    int second_smallest = numbers[length-1];
    int buffer = 0;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - i; j++) {
            buffer += numbers[j];
        }
        if (buffer < second_smallest && i != length - 1) {
            second_smallest = buffer;
        }
        buffer = 0;
    }
    return second_smallest;
}