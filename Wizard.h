#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

// Wizard subclass defined here

class Wizard : public Player {
    private:
    int mana;

    public:
    Wizard(std::string name, int health, int damage, int mana);
    void castSpell(Player * opponent);
    int getMana();
    void setMana(int m);
};

#endif