#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

// Class definition

class Player {

    // Data members defined here
    /// Constructor and member functions defined here

    public:
    std::string name;
    int health;
    int damage;

    Player(std::string name, int health, int damage);
    void attack(Player* opponent, int damage);
    void takeDamage(int damage);
    int getHealth();
    void setHealth(int h);
    int getDamage();
    void setDamage(int d);
    std::string getName();
    void setName(std::string name);
};

#endif