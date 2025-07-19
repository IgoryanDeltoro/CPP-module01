#include "Zombie.hpp"

Zombie::Zombie(const std::string n) : name(n) {}

Zombie::~Zombie(){
    std::cout << name << " is died" << std::endl;
}

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}