#include "Orchestra.h"

Orchestra::Orchestra() : max_size(0) {}

Orchestra::Orchestra(int size) : max_size(size), cur_size(0) {
    arr = new Musician[size];
}

bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < max_size; i++) {
        if (arr[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

Musician * Orchestra::get_members() {
    return arr;
}

int Orchestra::get_current_number_of_members() {
    return cur_size;
}


bool Orchestra::add_musician(Musician new_musician) {
        if (cur_size < max_size) {
            arr[cur_size] = new_musician;
            cur_size++;
            return true;
        } else {
            return false;
        }
    }
   
Orchestra::~Orchestra() {
    delete[] arr;
}


