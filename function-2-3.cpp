#include <iostream>

void two_five_nine(int array[], int n) {
  int num_arr[3] = {0, 0, 0};
  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2: {
        num_arr[0]++;
        break;
      }
      case 5: {
        num_arr[1]++;
        break;
      }
      case 9: {
        num_arr[2]++;
        break;
      }
    }
  }
  std::cout << "2:" << num_arr[0] << ";5:" << num_arr[1] << ";9:" << num_arr[2]
            << ";\n"
            << std::endl;
}