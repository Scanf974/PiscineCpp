/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:23:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 20:41:36 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <time.h>

int		main(void)
{
	srand(time(0));
	FragTrap	b("Bruno");
	FragTrap	j("Jean");

	b.maleeAttack(j.getName());
	j.takeDamage(b.getMaleeAttackDamage());
	std::cout << j.getName() << " has " << j.getHitPoints() << " Hit Points letf" << std::endl;
	b.vaulthunter_dot_exe(j.getName());
	return (0);
}
