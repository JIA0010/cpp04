#include "Cat.hpp" 


Cat::Cat() : Animal() {
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "Cat assignation operator called" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow" << std::endl;
}
