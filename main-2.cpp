#include <iostream>
#include <cmath>
#include "GridItem.hpp"
#include "Helper.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"
#include "Goal.hpp"
#include "Experiment.hpp"

int main() {
    Scientist guy(4, 3);
    Goal goal1(1, 1);
    Experiment expe2(5, 5, 1, 1); 
    guy.move(1, 2);
    std::pair<int, int> coord = guy.getCoordinates();
    std:: cout << "new coord: " << coord.first << coord.second << std::endl;
    expe2.interact(&guy); 
    expe2.interact(&guy); 
    guy.move(-4, -4);
    coord = guy.getCoordinates();
    return 0;
}