#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_digits[5] = {1,1,1,1,1};
  std::cout << binary_to_int(binary_digits,5) << std::endl;
}
