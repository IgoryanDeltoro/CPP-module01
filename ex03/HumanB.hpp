#include "Weapon.hpp"

class HumanB {
    private:
        Weapon *weapon;
        std::string name;

    public:
        HumanB(const std::string &n);
        ~HumanB();

        void attack() const;
        void setWeapon(Weapon &w);
};