#include "Dog.hpp"
 
Dog::Dog() : Animal("Dog")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::Dog(const Dog &init) : Animal(init)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = init;
}

Dog &Dog::operator=(const Dog &init)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &init)
    {
        this->_type = init._type;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Voooof :P" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->_type << " destructor called" << std::endl;
}