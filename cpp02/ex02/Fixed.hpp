#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _fixPointNumValue;
        static const int    _fractBits = 16;

    public:
        Fixed();
        Fixed( const int i );
        Fixed( const float f );
        Fixed( const Fixed &init );
        Fixed& operator=( const Fixed &init );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

        float   toFloat( void ) const;
        int     toInt( void ) const;

        Fixed   operator+( const Fixed &init ) const;
        Fixed   operator-( const Fixed &init ) const;
        Fixed   operator*( const Fixed &init ) const;
        Fixed   operator/( const Fixed &init ) const;
        bool    operator>( const Fixed &init ) const;
        bool    operator<( const Fixed &init ) const;
        bool    operator>=( const Fixed &init ) const;
        bool    operator<=( const Fixed &init ) const;
        bool    operator==( const Fixed &init ) const;
        bool    operator!=( const Fixed &init ) const;
        Fixed&  operator++( void ); // prefix
        Fixed   operator++( int ); // postfix
        Fixed&  operator--( void ); // prefix
        Fixed   operator--( int ); // postfix
        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream & operator<<( std::ostream & refobj, Fixed const & refnum);

#endif