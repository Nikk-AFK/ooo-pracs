#include <iostream>

extern int is_identity(int array[10][10]);

int main() {
    int arr[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

    std::cout << is_identity(arr) << std::endl;
}
