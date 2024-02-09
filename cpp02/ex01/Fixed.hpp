#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _fixPointNumValue;
        static const int    _fractBits = 8;

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

};

std::ostream & operator<<( std::ostream & refobj, Fixed const & refnum);

#endif