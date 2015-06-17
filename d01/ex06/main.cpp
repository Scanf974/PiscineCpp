/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 16:26:39 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 17:37:50 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int	main(void)
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	HumanA bob("Bob", club);

	jim.setWeapon(club);
	jim.attack();
	bob.attack();

	club.setType("some other type of club");
	jim.attack();
	bob.attack();
	return (0);
}
