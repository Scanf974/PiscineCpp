/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 18:03:23 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/24 18:09:45 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	iter(T *tab, size_t len, T (*f)(T))
{
	size_t		i = 0;

	while (i < len)
	{
		tab[i] = (*f)(tab[i]);
		i++;
	}
}


int		plusOne(int n)
{
	return (n + 1);
}

int		main(void)
{
	int		tab[3] = {2, 4, -4};

	::iter(tab, 3, &plusOne);
	for (int i = 0; i < 3; i++)
		std::cout << tab[i] << std::endl;
	return (0);
}
