#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <cstdlib>
#include <tuple>
#include <cmath>

class GameEntity {

private:

enum GameEntityType {
    ExplosionType = 0, MineType = 1, NoneType = 2, ShipType = 3
};

std::tuple<int, int> position;
GameEntityType type;

public:

GameEntity(int x, int y, char type) : position({x, y}) {
    switch (type) {
        case 'E':
            type = ExplosionType;
            break;
        case 'M':
            type = MineType;
            break;
        case 'N':
            type = NoneType;
        case 'S':
            type = ShipType;
    }
}

GameEntityType getType() {
    return type;
}

std::tuple<int, int> getPos() {
    return position;
}

};



#endif