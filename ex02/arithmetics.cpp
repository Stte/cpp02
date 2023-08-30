#include "Fixed.hpp"

Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	if (other.getRawBits() == 0)
	{
		std::cout << "Div. by zero!" << std::endl;
		return (Fixed());
	}
	return (Fixed(toFloat() / other.toFloat()));
}
