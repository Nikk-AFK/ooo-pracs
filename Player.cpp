#include <iostream>
#include "Player.h"
#include "Warrior.h"
#include "Wizard.h"

Player::Player(std::string name, int health, int damage) : name(name), health(health), damage(damage) {}
Wizard::Wizard(std::string name, int health, int damage, int mana) : Player(name, health, damage), mana(mana) {}
Warrior::Warrior(std::string name, int health, int damage, std::string weapon) : Player(name, health, damage), weapon(weapon) {}
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