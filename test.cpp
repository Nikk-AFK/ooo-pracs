#include <iostream>
#include <unistd.h>

int main() {
    std::time_t epoch = std::time(nullptr);
    std::cout << epoch << std::endl;
    sleep(2);
    epoch = std::time(nullptr);
    std::cout << epoch << std::endl;
}
