#include "Weapon.hpp"

class HumanA {
    private:
        Weapon& weapon;
        std::string name;
    
    public:
        HumanA(const std::string &n, Weapon& t);
        ~HumanA();

        void attack();
};