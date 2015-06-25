/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 22:03:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 00:46:21 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

int		main(void)
{
	Span	a(10);

	try
	{
		a.addNumber(43);
		a.addNumber(3);
		a.addNumber(3);
		a.addNumber(3);
		a.addNumber(3);
		a.addNumber(3);
		a.addNumber(3);

		std::cout << a.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Out of Range" << std::endl;
	}
	return (0);
}
