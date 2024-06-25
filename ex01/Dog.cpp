#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()){
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), _brain(new Brain(*copy._brain)) {
    *this = copy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
    if (this == &copy)
        return *this;
    delete _brain;
    _brain = new Brain(*copy._brain);
    std::cout << "Dog assignation operator called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof Woof" << std::endl;
}

