#ifndef UTILS_H
#define UTILS_H

#include "GameEntity.h"
#include <cstdlib>
#include <tuple>
#include <cmath>

class Utils {

public:

static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    return {rand() % gridWidth, rand() % gridHeight};
}

static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2) {
    double dist = std::sqrt(std::pow(std::get<0>(pos2) - std::get<0>(pos1), 2) + std::pow(std::get<1>(pos2) - std::get<1>(pos1), 2));
    return dist;
}


};

#endif