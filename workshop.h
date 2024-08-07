#include <iostream>

void changeValue(double* ptr) {
    * ptr = 42;
}

void printArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std:: cout << arr[i] << "" << std::endl; 
    }
}

double arrayMax(double* arr, int size) {
    double max = arr[1];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } 
    }
    return max;
}

double* dynamicArray(int N, double M) {
    double * new_arr = new double[N];
    for (int i = 0; i < N; i++) {
        new_arr[i] = M;
    }
    return new_arr;
}