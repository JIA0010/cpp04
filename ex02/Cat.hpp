#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *_brain;
public:
    Cat();
    virtual ~Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &copy);

    virtual void makeSound() const;
};

#endif