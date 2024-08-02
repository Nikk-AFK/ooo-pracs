#include <iostream>

extern int sum_min_max(int integers[], int length);

int main() {
  int arr[4] = {1,2,3,16};
  std::cout << sum_min_max(arr,4) << std::endl;
}
