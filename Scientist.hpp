#ifndef SCIENTIST_H
#define SCIENTIST_H

#include "GridItem.hpp"


class Scientist : public GridItem {
    public: 
    Scientist() {}
    Scientist(int gridWidth, int gridHeight) : GridItem(0, 0, gridWidth, gridHeight), experimentCount(0) {}

    int getExperimentCount() {
        return experimentCount;
    }

    void runExperiment() {
        experimentCount++;
    }

    bool move(int xOffset, int yOffset) {
        if (abs(xOffset) <= 2 && abs(yOffset) <= 2) {
            setCoordinates(position.first + xOffset, position.second + yOffset);
            return true;
        } else {
            return false;
        }
    }

    protected:
    int experimentCount;
};

#endif