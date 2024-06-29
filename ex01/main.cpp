#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* dog = new Dog();
const Animal* cat = new Cat();
const WrongAnimal* wrong = new WrongCat();

std::cout << "---------------------" << std::endl;

std::cout << dog->getType() << " " << std::endl;
std::cout << cat->getType() << " " << std::endl;
std::cout << wrong->getType() << " " << std::endl;
cat->makeSound();
dog->makeSound();
wrong->makeSound();
meta->makeSound();

std::cout << "---------------------" << std::endl;
delete meta;
delete dog;
delete cat;
delete wrong;


return 0;
}