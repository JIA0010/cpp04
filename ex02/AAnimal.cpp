#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
    *this = copy;
    std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "AAnimal assignation operator called" << std::endl;
    return *this;
}

std::string AAnimal::getType() const {
    return this->_type;
}

void AAnimal::makeSound() const {
    std::cout << "AAnimal sound" << std::endl;
}
