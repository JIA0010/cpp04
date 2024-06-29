#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *_brain;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copy);

    virtual void makeSound() const;
};

#endif