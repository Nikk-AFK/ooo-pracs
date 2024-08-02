#include <iostream>
#include <string>

void convert_to_binary(int num) {
  std::string str("");
  while (num != 0) {
    str.insert(0, 1, (num % 2) + '0');
    num = num / 2;
  }
  std::cout << "" << str << std::endl;
}

int main() {
    convert_to_binary(75);
}
