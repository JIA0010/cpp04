#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    this->_type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    *this = copy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound" << std::endl;
}

