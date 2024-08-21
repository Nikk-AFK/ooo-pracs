#ifndef CAGE_H
#define CAGE_H

#include <string>

class Cage {
    public: 
    std::string name;
    int ID;

    Cage() {
        name = "";
        ID = 0;
    }

    Cage(std::string newName, int newNumber) {
        name = newName;
        ID = newNumber;
    }

    std::string getName() {
        return name;
    }
    
    int getIDnum() {
        return ID;
    }
    ~Cage() {
    }
};

#endif