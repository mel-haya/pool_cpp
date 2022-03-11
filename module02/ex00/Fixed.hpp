#ifndef __FIXED_HPP__
#define __FIXED_HPP__

# include <iostream>

#define NUM_FRACTION_BITS 8

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &f);
        ~Fixed();
        Fixed & operator= (const Fixed &f);

        int getRawBits( void ) const; 
        void setRawBits( int const raw ); 
    private:
        int fixedPointValue;
        static const int fractionBitNum = NUM_FRACTION_BITS;
};
#endif