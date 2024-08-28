#include <iostream>
#include "player.h"
#include "warrior.h"
#include "wizard.h"

Player::Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}
void Player::attack(Player * opponent, int damage) {
    opponent->takeDamage(damage);
}
void Player::takeDamage(int damage) {
    health -= damage;
    damage += damage;
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}
int Player::getHealth() {
    return health;
}
void Player::setHealth(int h) {
    health = h;
}
int Player::getDamage() {
    return damage;
}
void Player::setDamage(int d) {
    damage = d;
}
std::string Player::getName() {
    return name;
}
void setName(std::string name) {
    name = name;
}
