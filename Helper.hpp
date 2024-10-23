#ifndef HELPER_H
#define HELPER_H

#include <utility>
#include <cmath>

class Helper {
    public:
    static int manhattanDistance(std::pair<int, int> item1, std::pair<int, int> item2) {
        return abs(item2.first - item1.first) + abs(item2.second - item1.second);
    }
};

#endif