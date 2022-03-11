#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed::Fixed(int i)
{
    this->fixedPointValue = i << this->fractionBitNum;
}

Fixed::Fixed(float i)
{
    this->fixedPointValue = roundf(i * (1 << this->fractionBitNum));
}

Fixed::~Fixed()
{
   ;
}

Fixed & Fixed::operator = (const Fixed &f)
{
    if (this != &f)
        this->fixedPointValue = f.getRawBits();
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

Fixed  Fixed::operator+ (const Fixed &f)
{
    return Fixed(this->toFloat() + f.toFloat());
}
Fixed  Fixed::operator- (const Fixed &f)
{
    return Fixed(this->toFloat() - f.toFloat());
}
Fixed  Fixed::operator* (const Fixed &f)
{
    return Fixed(this->toFloat() * f.toFloat());
}
Fixed  Fixed::operator/ (const Fixed &f)
{
    return Fixed(this->toFloat() / f.toFloat());
}

bool  Fixed::operator> (const Fixed &f)
{
    return (this->fixedPointValue > f.fixedPointValue);
}

bool  Fixed::operator>= (const Fixed &f)
{
    return (this->fixedPointValue >= f.fixedPointValue);
}
bool  Fixed::operator< (const Fixed &f)
{
    return (this->fixedPointValue < f.fixedPointValue);
}
bool  Fixed::operator<= (const Fixed &f)
{
    return (this->fixedPointValue <= f.fixedPointValue);
}
bool  Fixed::operator== (const Fixed &f)
{
    return (this->fixedPointValue == f.fixedPointValue);
}
bool  Fixed::operator!= (const Fixed &f)
{
    return (this->fixedPointValue != f.fixedPointValue);
}

Fixed	Fixed::operator++(){
	this->fixedPointValue++;
	return *this;
}

Fixed	Fixed::operator++(int){
	Fixed tmp = *this;
	++(*this);
	return tmp;
}

Fixed	Fixed::operator--(){
	this->fixedPointValue--;
	return *this;
}

Fixed	Fixed::operator--(int){
	Fixed tmp = *this;
	--(*this);
	return tmp;
}

const Fixed & Fixed::max(const Fixed &f, const Fixed &s)
{
    if( f.fixedPointValue >= s.fixedPointValue )
        return f;
    else
        return s;
}

const Fixed & Fixed::min(const Fixed &f, const Fixed &s)
{
    if( f.fixedPointValue < s.fixedPointValue )
        return f;
    else
        return s;
}