#ifndef GOAL_H
#define GOAL_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal : public Interactable {
    public:
    Goal() : Interactable(0, 0, 0, 0) {}
    Goal(int width, int height) : Interactable(0, 0, width, height) {}

    bool interact(Scientist* player) {
        if (Helper::manhattanDistance(this->getCoordinates(), player->getCoordinates()) == 0 && player->getExperimentCount() >= 1) {
            return true;
        } else {
            return false;
        }
    }

    InteractableType getType() {
        return InteractableType::GOAL;
    }
        
};

#endif