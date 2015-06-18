/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:23:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 17:27:28 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	b("Bruno");
	FragTrap	j("Jean");

	b.rangedAttack(j.getName());
	j.takeDamage(34);
	std::cout << j.getHitPoints() << std::endl;
	
	return (0);
}
