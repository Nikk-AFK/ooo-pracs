#include <iostream>
#include "player.h"
#include "warrior.h"
#include "wizard.h"

Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player * opponent) {
    opponent->takeDamage(mana);
    std::cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";
}
int Wizard::getMana() {
    return mana;
}
void Wizard::setMana(int m) {
    mana = m;
}