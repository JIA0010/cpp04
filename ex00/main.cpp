#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();

std::cout << "---------------------" << std::endl;

std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
meta->makeSound();
j->makeSound();
i->makeSound(); //will output the cat sound!
k->makeSound();

std::cout << "---------------------" << std::endl;
delete meta;
delete j;
delete i;
delete k;


return 0;
}