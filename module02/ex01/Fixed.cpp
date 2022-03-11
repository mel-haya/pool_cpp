#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(int i)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = i << this->fractionBitNum;
}

Fixed::Fixed(float i)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(i * (1 << this->fractionBitNum));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator = (const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &f)
        this->fixedPointValue = f.fixedPointValue;
    return *this;
}

int Fixed::getRawBits( void ) const
{
    return (this->fixedPointValue);
}

void Fixed::setRawBits( int const raw )
{
    this->fixedPointValue = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)this->fixedPointValue / (1 << this->fractionBitNum));
}

int Fixed::toInt( void ) const
{
    return this->fixedPointValue / (1 << this->fractionBitNum);
}

std::ostream &operator<<( std::ostream & s, Fixed const & f )
{
    s << f.toFloat();
    return s;
}