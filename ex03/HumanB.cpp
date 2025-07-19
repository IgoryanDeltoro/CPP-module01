#include "HumanB.hpp"

HumanB::HumanB(const std::string &n) : weapon(NULL), name(n) {};
HumanB::~HumanB() {};

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attack with their ";
        std::cout << weapon->getType() << std::endl;
    }
    else {
        std::cout << name << " attack with their ";
        std::cout << "nothing" << std::endl;
    }
}
void HumanB::setWeapon(Weapon &w) {
    weapon = &w;
};
