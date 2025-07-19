# include "Zombie.hpp"

int main()
{
    int hordeCount = 5;

    // zombie horde allocation
    Zombie *horde = zombieHorde(hordeCount, "Fread");

    for (int i = 0; i < hordeCount; i++) {
        horde[i].announce();
    }

    // freed memory
    delete[] horde;
}