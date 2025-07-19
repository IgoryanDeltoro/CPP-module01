#include <iostream>

int main(){
    // save an address of a value
    std::string A = "HI THIS IS BRAIN";
    std::string* PTR = &A;
    std::string& REF = A;

    std::cout << "=== showing addresses ===";
    std::cout << std::endl;
    std::cout << "&A:   " << &A << std::endl;
    std::cout << "PTR:  " << PTR << std::endl;
    std::cout << "&REF: " << &REF << std::endl;
    std::cout << std::endl;

    std::cout << "=== showing a value of saved address ===";
    std::cout << std::endl;
    std::cout << "A:    " << A << std::endl;
    std::cout << "*PTR: " << *PTR << std::endl;
    std::cout << "REF:  " << REF << std::endl;
    std::cout << std::endl;
}