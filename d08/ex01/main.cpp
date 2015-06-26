/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 22:03:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/25 23:39:46 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

int		main(void)
{
	Span	a(10);

	try
	{
		a.addNumber(2);
		a.addNumber(4);
		a.addNumber(6);
		a.addNumber(9);
	}
	catch (std::exception & e)
	{
		std::cout << "Out of Range" << std::endl;
	}
	return (0);
}
