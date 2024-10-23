#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include <utility>
#include <cmath>
#include "GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType {
    GOAL,
    EXPERIMENT
};

class Interactable : public GridItem {
    public:

    Interactable() : GridItem(0, 0, 0, 0) {
        countInter++;
    }
    Interactable(int x, int y, int width, int height) : GridItem(x, y, width, height) {
        countInter++;
    }

    virtual bool interact(Scientist* player) {}
    virtual InteractableType getType() {}
    int getActiveInteractableCount() {
        return countInter;
    }

    ~Interactable() {
        countInter--;
    }

    protected:
    static int countInter;

};

int Interactable::countInter = 0;

#endif