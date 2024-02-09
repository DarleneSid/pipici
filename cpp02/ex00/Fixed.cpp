#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixPointNumValue = 0;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits function called" << std::endl;
    return this->_fixPointNumValue;
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixPointNumValue = raw;
}

Fixed::Fixed( const Fixed &init )
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(init.getRawBits());
}

Fixed& Fixed::operator=(const Fixed &init )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &init)
        this->_fixPointNumValue = init.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}