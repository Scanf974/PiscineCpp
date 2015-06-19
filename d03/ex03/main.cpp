/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:23:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 01:59:15 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <time.h>

int		main(void)
{
	srand(time(0));
	FragTrap	b("BRUNO");
	ScavTrap	j("JEAN");
	NinjaTrap	n("PD");
	NinjaTrap	c("CON");

	c.ninjaShoebox(b);
	c.ninjaShoebox(j);
	c.ninjaShoebox(n);

	return (0);
}
