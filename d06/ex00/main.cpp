/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 00:30:34 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/24 07:26:04 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	conv_char(int n, bool nan)
{
	char		c;

	std::cout << "char: ";
	if (nan)
		std::cout << "impossible";
	else if (n > ' ' && n <= '~') {
		c = static_cast<char>(n);
		std::cout << "'" << c << "'";
	}
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	conv_int(float f, bool nan)
{
	std::cout << "int: ";
	if (nan)
		std::cout << "impossible";
	else
		std::cout << f;
	std::cout << std::endl;
}

void	conv_float(float f, int n)
{
	std::cout << "float: ";
	std::cout << f;
	if (static_cast<float>(n) == f)
		std::cout << ".0";
	std::cout << "f";
	std::cout << std::endl;
}

void	conv_double(float f, int n)
{
	double		d;

	d = static_cast<double>(f);
	std::cout << "double: ";
	std::cout << d;
	if (static_cast<float>(n) == f)
		std::cout << ".0";
	std::cout << std::endl;
}

bool	isnan(char *s)
{
	std::string		str = s;
	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int			i1;
	float		i2;
	bool		nan;

	if (ac == 2)
	{
		nan = isnan(av[1]);
		i1 = std::atoi(av[1]);
		i2 = std::atof(av[1]);
		conv_char(i1, nan);
		conv_int(i2, nan);
		conv_float(i2, i1);
		conv_double(i2, i1);
	}
	return (0);
}
