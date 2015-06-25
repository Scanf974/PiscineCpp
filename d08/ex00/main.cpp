/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:48:34 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/25 21:31:20 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int		main(void)
{
	int							index;
	std::list<int>				a;
	std::vector<int>			b;
	std::map<std::string, int>	c;

	a.push_back(3);
	a.push_back(1);
	a.push_back(6);
	a.push_back(4);

	index = easyfind(a, 6);
	std::cout << index << std::endl;	

	b.push_back(3);
	b.push_back(1);
	b.push_back(6);
	b.push_back(4);

	index = easyfind(b, 6);
	std::cout << index << std::endl;	

	return (0);
}
