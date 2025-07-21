#include "Harl.hpp"

int main () {
    Harl h;

    std::cout << "DEBUG: ";
    h.complain("DEBUG");
    std::cout << std::endl;

    std::cout << "INFO: ";
    h.complain("INFO");
    std::cout << std::endl;

    std::cout << "WARNING: ";
    h.complain("WARNING");
    std::cout << std::endl;

    std::cout << "ERROR: ";
    h.complain("ERROR");
    std::cout << std::endl;

    return 0;
}