#include <iostream>
#include "Fixed.class.hpp"

int		main(void)
{

	Fixed	q(20);
	Fixed	u(30.4f);

	std::cout << q + u << std::endl;

	return 0;
}
