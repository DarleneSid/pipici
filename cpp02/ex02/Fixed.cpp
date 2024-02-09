#include "Fixed.hpp"

Fixed::Fixed() : _fixPointNumValue(0)
{
}

Fixed::Fixed( const int i ) : _fixPointNumValue( i << _fractBits)
{
}

Fixed::Fixed( const float f ) : _fixPointNumValue( std::roundf( f * ( 1 << _fractBits)))
{
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
    *this = init;
}

// basic operators 

Fixed& Fixed::operator=(const Fixed &init )
{
    if (this != &init)
        this->_fixPointNumValue = init.getRawBits();
    return *this;
}

std::ostream & operator<<( std::ostream & refobj, Fixed const & refnum)
{
    refobj << refnum.toFloat();
    return refobj;
}

// float & int

float   Fixed::toFloat( void ) const
{
    return static_cast<float>( this->getRawBits() ) / (1 << _fractBits);
}

int     Fixed::toInt( void ) const
{
    return this->_fixPointNumValue >> _fractBits;
}

// operators for this exercise

Fixed   Fixed::operator+( const Fixed &init ) const
{
    return Fixed(this->toFloat() + init.toFloat());
}

Fixed   Fixed::operator-( const Fixed &init ) const
{
    return Fixed(this->toFloat() - init.toFloat());
}

Fixed   Fixed::operator*( const Fixed &init ) const
{
    return Fixed(this->toFloat() * init.toFloat());
}

Fixed   Fixed::operator/( const Fixed &init ) const
{
    return Fixed(this->toFloat() / init.toFloat());
}

bool    Fixed::operator>( const Fixed &init ) const
{
    return this->getRawBits() > init.getRawBits();

}

bool    Fixed::operator<( const Fixed &init ) const
{
    return this->getRawBits() < init.getRawBits();
}

bool    Fixed::operator>=( const Fixed &init ) const
{
    return this->getRawBits() >= init.getRawBits();
}

bool    Fixed::operator<=( const Fixed &init ) const
{
    return this->getRawBits() <= init.getRawBits();
}

bool    Fixed::operator==( const Fixed &init ) const
{
    return this->getRawBits() == init.getRawBits();
}

bool    Fixed::operator!=( const Fixed &init ) const
{
    return this->getRawBits() != init.getRawBits();
}

Fixed&  Fixed::operator++( void )
{
    ++this->_fixPointNumValue;
    return *this;
}

Fixed&  Fixed::operator--( void )
{
    --this->_fixPointNumValue;
    return *this;
}

Fixed   Fixed::operator++( int )
{
    Fixed num( *this );
    num._fixPointNumValue = this->_fixPointNumValue++;
    return num;
}

Fixed   Fixed::operator--( int )
{
    Fixed num( *this );
    num._fixPointNumValue = this->_fixPointNumValue--;
    return num;
}

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

Fixed::~Fixed()
{
}
