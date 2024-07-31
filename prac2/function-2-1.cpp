#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int num = stoi(decimal_number);
    std::string binary_str("");
    while (num > 0) {
        num = num / 2;
    }
}