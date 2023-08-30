#include "Fixed.hpp"

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
