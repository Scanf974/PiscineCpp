/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 12:44:46 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 13:50:00 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <time.h>

int		main(void)
{
	srand(time(0));
	ZombieEvent		eve = ZombieEvent();

	Zombie			*z1 = eve.randomChump();
	eve.setZombieType("SWAAAAAG");
	Zombie			*z2 = eve.randomChump();
	Zombie			*z3 = eve.randomChump();
	eve.setZombieType("Bobo Parisien");
	Zombie			*z4 = eve.randomChump();

	z1->announce();
	z2->announce();
	z4->announce();
	z3->announce();
	delete z1;
	delete z2;
	delete z3;
	delete z4;
	return (0);
}
