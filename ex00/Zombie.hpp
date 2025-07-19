#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
    private:
        std::string name;

    public:
        Zombie(const std::string n);
        ~Zombie();
        
        void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif