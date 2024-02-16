#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &init)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = init;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &init)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &init)
    {
        this->_type = init._type;
    }
    return *this;
}
        
void    WrongAnimal::makeSound() const
{
 std::cout << "* WrongAnimal make sound *" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->_type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}