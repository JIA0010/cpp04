#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& copy )
{
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=( const Brain& copy )
{
    std::cout << "Brain assignation operator called" << std::endl;
    if ( this != &copy ) {
        for ( int i = 0; i < 100; i++ ) {
            this->_ideas[i] = copy._ideas[i];
        }
    }
    return *this;
}