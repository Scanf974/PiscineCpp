/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:28:07 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 15:40:01 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"

int		main(void)
{
	Sorcerer	a("Bruno", "King");
	Victim		v("Gros PD");

	std::cout << a << std::endl;
	std::cout << v << std::endl;
	return (0);
}
