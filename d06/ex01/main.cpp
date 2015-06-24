/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 08:51:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/24 11:21:46 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

struct		Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

bool	ft_isalnum(int n)
{
	if (n >= '0' && n <= '9')
		return true;
	if (n >= 'a' && n <= 'z')
		return true;
	if (n >= 'A' && n <= 'Z')
		return true;
	return false;
}

Data	*deserialize(void *raw)
{
	Data		*data;

	data = static_cast<Data *>(raw);
	return data;
}

void	*serialize(void)
{
	char			*b[8 + 4*8 + 8];
	char			*begin;
	int				ran;

	for (int i = 0; i < 8; i++)
	{
		ran = 0;
		while (!ft_isalnum(ran))
			ran = std::rand() % ('~' - ' ') + ' ' + 1;
		b[i] += static_cast<char>(ran);
	}
	*b += ran;
	for (int i = 0; i < 8; i++)
	{
		ran = 0;
		while (!ft_isalnum(ran))
			ran = std::rand() % ('~' - ' ') + ' ' + 1;
		b[8 + 4*8 + i] += static_cast<char>(ran);
	}
	std::cout << *b << std::endl;
	return static_cast<void *>(b);
}

int		main(void)
{
	std::srand(time(0));
	void	*data;
	Data	*n;

	data = serialize();
	n = deserialize(data);
	std::cout << n->n << std::endl;
	return (0);
}
