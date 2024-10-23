#include <iostream>
#include <cmath>
#include "GridItem.hpp"
#include "Helper.hpp"
int main() {
    GridItem item1(4, 3, 2, 5);
    GridItem item2(7, 9, 2, 5);

    int dist = Helper::manhattanDistance(item1.getCoordinates(), item2.getCoordinates());
    std::cout << "Manhattan distance is: " << dist << std::endl;

    return 0;
}