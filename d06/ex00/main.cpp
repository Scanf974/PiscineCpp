/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 00:30:34 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/24 01:10:30 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(int ac, char **av)
{
	char		c;
	int			i1;
	float		i2;
	float		f;
	double		d;

	if (ac == 2)
	{
		i1 = std::atoi(av[1]);
		i2 = std::atof(av[1]);
		c = static_cast<char>(i1);
		f = static_cast<float>(i2);
		d = static_cast<double>(i2);
		std::cout << "char: '" << c << "'"<< std::endl;
		std::cout << "int: " << i1 << std::endl;
		std::cout << "float: " << f << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	return (0);
}
