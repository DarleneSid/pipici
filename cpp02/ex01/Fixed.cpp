#include "Fixed.hpp"

Fixed::Fixed() : _fixPointNumValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int i ) : _fixPointNumValue( i << _fractBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f ) : _fixPointNumValue( std::roundf( f * ( 1 << _fractBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return this->_fixPointNumValue;
}

void    Fixed::setRawBits( int const raw )
{
    this->_fixPointNumValue = raw;
}

Fixed::Fixed( const Fixed &init )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = init;
}

Fixed& Fixed::operator=(const Fixed &init )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &init)
        this->_fixPointNumValue = init.getRawBits();
    return *this;
}

float   Fixed::toFloat( void ) const
{
    return static_cast<float>( this->getRawBits() ) / (1 << _fractBits);
}

int     Fixed::toInt( void ) const
{
    return this->_fixPointNumValue >> _fractBits;
}

std::ostream & operator<<( std::ostream & refobj, Fixed const & refnum)
{
    refobj << refnum.toFloat();
    return refobj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}