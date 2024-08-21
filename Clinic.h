#ifndef CLINIC_H
#define CLINIC_H

#include <string>
#include "Cage.h"

class Clinic {
    public: 
    std::string clinic_name;
    int max;
    Cage * arr = new Cage[10];
    int num;

    Clinic() {
        clinic_name = "";
        max = 0;
        num = 0;
    }

    Clinic(std::string name, int max_size) {
        clinic_name = name;
        max = max_size;
        num = 0;
    }

    int getNumber_of_cages() {
        return num;
    }

    std::string getName() {
        return clinic_name;
    }
    
    Cage * getCages() {
        return arr;
    }

    bool addCage(Cage new_cage) {
        if (num < max) {
            arr[num] = new_cage;
            num++;
            return true;
        } else {
            return false;
        }
    }

    ~Clinic() {
        delete[] arr;
    }
};

#endif