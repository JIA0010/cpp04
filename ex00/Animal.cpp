#include "Animal.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
    *this = copy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return this->_type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}