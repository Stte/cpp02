#include "Fixed.hpp"

bool	Fixed::operator>(const Fixed &other) const
{
	return (value > other.value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (value < other.value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (value >= other.value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (value <= other.value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (value == other.value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (value != other.value);
}

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

Fixed &Fixed::operator++(void)
{
	value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	value++;
	return (result);
}

Fixed &Fixed::operator--(void)
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	value--;
	return (result);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((Fixed &)(a < b ? a : b));
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((Fixed &)(a > b ? a : b));
}
