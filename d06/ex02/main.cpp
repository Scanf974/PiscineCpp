/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 11:44:48 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/24 13:31:10 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

class	Base { public: virtual ~Base(void) {} };
class	A : public Base {};
class	B : public Base {};
class	C : public Base {};

Base * generate(void)
{
	int		i = std::rand() % 3;
	Base	*b;

	if (i == 0)
		b = new A;
	else if (i == 1)
		b = new B;
	else
		b = new C;
	return b;
}

void identify_from_pointer( Base * p )
{
	if ( dynamic_cast<A *>(p) )
		std::cout << "A" << std::endl;
	if ( dynamic_cast<B *>(p) )
		std::cout << "B" << std::endl;
	if ( dynamic_cast<C *>(p) )
		std::cout << "C" << std::endl;
}

void identify_from_reference( Base & p )
{
	try
	{

	}
}

int		main(void)
{
	std::srand(std::time(0));
	Base		*b;

	b = generate();
	identify_from_pointer(b);

	return (0);
}
