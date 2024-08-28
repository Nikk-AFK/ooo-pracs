#include <iostream>
#include "player.h"
#include "warrior.h"
#include "wizard.h"

Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player * opponent) {
    opponent->takeDamage(30);
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";

}

std::string Warrior::getWeapon() {
    return weapon;
}

void Warrior::setWeapon(std::string w) {
    weapon = w;
}
