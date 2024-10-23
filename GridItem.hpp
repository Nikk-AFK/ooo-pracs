#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <utility>
#include <cmath>


class GridItem {
    public:
    GridItem() : w(1), h(1), position({0, 0}) {
        count++;
    }
    GridItem(int x, int y, int width, int height) : position({x, y}), w(width), h(height) {
        count++;
    }

    void setCoordinates(int x, int y) {
        position = {x, y};
    }

    std::pair<int, int> getCoordinates() {
        return position;
    }

    int getGridWidth() {
        return w;
    }

    int getGridHeight() {
        return h;
    }

    int getActiveGridItemCount() {
        return count;
    }

    virtual ~GridItem() {}

    protected:
    std::pair<int, int> position;
    int w;
    int h;
    static int count;
};

int GridItem::count = 0;

#endif