#include "Cat.hpp"
 
Cat::Cat() : Animal("Cat")
{
    std::cout << this->_type << " constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &init) : Animal(init)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->_brain = new Brain();
    *this = init;
}

Cat &Cat::operator=(const Cat &init)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &init)
    {
        this->_type = init._type;
        *(this->_brain) = *(init._brain);
    }
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Meooow :*" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->_type << " destructor called" << std::endl;
    delete this->_brain;
}