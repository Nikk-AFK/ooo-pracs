#include <iostream>
#include <cmath>
#include "GridItem.hpp"
#include "Helper.hpp"
int main() {
    GridItem item1(4, 3, 1, 5);

    int dist = Helper::manhattanDistance(item1.getCoordinates(), item1.getCoordinates());
    std::cout << "Manhattan distance is: " << dist << std::endl;
    std::cout << "Count is: " << item1.getActiveGridItemCount() << std::endl;

    return 0;
}