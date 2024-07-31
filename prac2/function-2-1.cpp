#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int num = stoi(decimal_number);
    std::string binary_str("");
    while (num > 0) {
        binary_str.insert(0,1,(num % 2));
        num = num / 2;
    }
    std::cout << binary_str << std::endl;
}