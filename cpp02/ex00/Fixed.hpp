#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _fixPointNumValue;
        static const int    _fractBits = 8;
    public:
        Fixed();
        Fixed( const Fixed &init );
        Fixed& operator=( const Fixed &init );
        ~Fixed();

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

};

#endif