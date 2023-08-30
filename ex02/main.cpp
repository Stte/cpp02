#include "Fixed.hpp"

int	main(void)
{
	// Fixed		a;
	Fixed const	b(10);
	Fixed const	c(0);
	// Fixed const	d(b);

	// a = Fixed (1234.4321f);

	// std::cout << "a is " << a << std::endl;
	// std::cout << "b is " << b << std::endl;
	// std::cout << "c is " << c << std::endl;
	// std::cout << "d is " << d << std::endl;

	// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// if (b > c)
	// 	std::cout << "B is bigger" << std::endl;
	// else
	// 	std::cout << "B is smaller" << std::endl;

	std::cout << b / c << std::endl;
	return (0);
}
