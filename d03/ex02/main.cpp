/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:23:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 00:26:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <time.h>

int		main(void)
{
	srand(time(0));
	FragTrap	b("BRUNO");
	ScavTrap	j("JEAN");
	
	b.maleeAttack(j.getName());
	j.takeDamage(b.getMaleeAttackDamage());

	j.maleeAttack(b.getName());
	b.takeDamage(j.getMaleeAttackDamage());
	return (0);
}
