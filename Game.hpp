#ifndef GAME_H
#define GAME_H

#include <utility>
#include <vector>
#include <iostream>
#include <cmath>
#include "GridItem.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

class Game {
    protected:
    int width;
    int height;

    public: 
    Game() {}
    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates) : width(width), height(height) {
        Scientist player(1, 1);
        player.setCoordinates(0, 0);
        Goal goal(1, 1);
        goal.setCoordinates(width-1, height-1);
        
    }

};

#endif