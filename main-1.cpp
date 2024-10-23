#include "Utils.h"
#include <iostream>

int main() {
    std::tuple<int, int> position1 = {5, 4};
    std::tuple<int, int> position2 = {12, 15};

    double dist = Utils::calculateDistance(position1, position2);

    std::cout << "Distance is: " << dist << std::endl;
    return 0;
}