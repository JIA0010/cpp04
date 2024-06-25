#include "Dog.hpp"

Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) {
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

