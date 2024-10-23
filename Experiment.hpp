#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include "Interactable.hpp"
#include "Helper.hpp"

class Experiment : public Interactable {
    public:
    Experiment() : Interactable(0, 0, 0, 0) {}
    Experiment(int x, int y, int width, int height) : Interactable(x, y, width, height) {}

    bool interact(Scientist* player) {
        if (Helper::manhattanDistance(this->getCoordinates(), player->getCoordinates()) == 0) {
            player->runExperiment();
            if (player->getExperimentCount() > 3) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }

    InteractableType getType() {
        return EXPERIMENT;
    }
        
};


#endif