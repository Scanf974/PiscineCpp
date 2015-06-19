/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 00:46:58 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 01:13:35 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

/*-------------- Constructors -------------*/
SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/


/*------------------ Seter -----------------*/


/*------------------ Other -----------------*/
void			SuperMutant::takeDamage(int amount) {
	if (amount > 0) {
		this->_hp -= amount - 3;
	}
	return ;
}
