#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType(void) {
    return type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}