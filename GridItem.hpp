#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <utility>
#include <cmath>


class GridItem {
    protected:
    std::pair<int, int> position;
    int w;
    int h;
    static int count;
    
    public:
    GridItem() : w(0), h(0), position({0, 0}) {
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

    virtual ~GridItem() {
        count--;
    }


};

int GridItem::count = 0;

#endif