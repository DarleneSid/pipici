#include "WrongCat.hpp"
 
WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &init) : WrongAnimal(init)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = init;
}

WrongCat &WrongCat::operator=(const WrongCat &init)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &init)
    {
        this->_type = init._type;
    }
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong Meooow :*" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << this->_type << " destructor called" << std::endl;
}