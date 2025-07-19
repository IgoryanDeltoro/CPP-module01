#include "Zombie.hpp"

int main(){
    // init project
    Zombie z("Foo");
    z.announce();

    //  heap allocation
    Zombie *f = newZombie("Fread");
    f->announce();
    delete f;

    // stack allocation
    randomChump("Bob");
}