#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{
protected:
    std::string type;

public:
    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &copy);

    std::string getType() const;
    virtual void makeSound() const = 0;
};


#endif