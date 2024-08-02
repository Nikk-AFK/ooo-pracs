#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

int main() {
  int arr[4] = {1,3,3,1};
  std::cout << sum_if_palindrome(arr,4) << std::endl;
}
