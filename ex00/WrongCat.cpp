#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->_type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) {
    *this = copy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
    if (this != &copy)
        this->_type = copy._type;
    std::cout << "WrongCat assignation operator called" << std::endl;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}