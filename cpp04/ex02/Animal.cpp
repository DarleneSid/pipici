#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &init)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = init;
}

Animal& Animal::operator=(const Animal &init)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &init)
    {
        this->_type = init._type;
    }
    return *this;
}
        
void    Animal::makeSound() const
{
 std::cout << "* Animal make sound *" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}