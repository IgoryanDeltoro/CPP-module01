#include "HumanA.hpp"

HumanA::HumanA(const std::string &n, Weapon &t) : weapon(t), name(n) {};
HumanA::~HumanA() {}

void HumanA::attack() {
    std::cout << name << " attack with their ";
    std::cout << weapon.getType() << std::endl;
}