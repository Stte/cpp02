#include "Fixed.hpp"

int	main(void)
{
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	Fixed		c;

	if (b > c)
		std::cout << "B is bigger than C" << std::endl;
	else
		std::cout << "B is smaller than C" << std::endl;

	std::cout << "c++: " << c++ << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "++c: " << ++c << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "--c: " << --c << std::endl;

	std::cout << b / c << std::endl;
	std::cout << b / 2 << std::endl;
	std::cout << b + 1.5f << std::endl;
	std::cout << b - 0.5f << std::endl;
	std::cout << b * 2.0f << std::endl;

	std::cout << "Min: "<<Fixed::min(b, c) << std::endl;
	std::cout << "Max: "<<Fixed::max(b, c) << std::endl;

	return (0);
}
