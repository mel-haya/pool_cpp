#ifndef __FIXED_HPP__
#define __FIXED_HPP__

# include <iostream>
# include <cmath>

#define NUM_FRACTION_BITS 8

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(int i);
        Fixed(float i);
        ~Fixed();
        Fixed & operator= (const Fixed &f);

        int getRawBits( void ) const; 
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
    private:
        int fixedPointValue;
        static const int fractionBitNum = NUM_FRACTION_BITS;
};

std::ostream &operator<<( std::ostream & o, Fixed const & i );
#endif