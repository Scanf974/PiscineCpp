/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 15:07:12 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 16:04:01 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde		horde1 = ZombieHorde(10);
	std::cout << "Horde 1" << std::endl;
	horde1.announce();

	ZombieHorde		horde2 = ZombieHorde(4);
	std::cout << "Horde 2" << std::endl;
	horde2.announce();
	return (0);
}
