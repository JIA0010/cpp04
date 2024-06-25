#include "Animal.hpp"

Animal::Animal() : type("Animal") {
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
        this->type = copy.type;
    std::cout << "Animal assignation operator called" << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}