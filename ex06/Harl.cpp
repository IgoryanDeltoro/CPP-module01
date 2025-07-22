#include "Harl.hpp"

Harl::Harl() {};
Harl::~Harl() {};

void Harl::debug() {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\n";
    std::cout << "I really do !\n ";
}
void Harl::info() {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money\n.";
    std::cout << "You didn't put enough bacon in my burger !If you did, I wouldn't be asking for more!\n";
}
void Harl::warning() {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free.\n";
    std::cout << "I've been coming for years whereas you started working here since last month.\n";
}
void Harl::error() {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}


void Harl::complain(std::string level){
    if (!level.length())
    {
        std::cout << "Error: input string is empty\n";
        return;
    }

    enum Level { DEBUG, INFO, WARNING, ERROR, UNKNOWN};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    Level lvl = UNKNOWN;

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            lvl = static_cast<Level>(i);
    }

    switch (lvl)
    {
    case DEBUG:
        debug();
        break;
    case INFO:
        info();
        break;
    case WARNING:
        warning();
        break;
    case ERROR:
        error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
}
