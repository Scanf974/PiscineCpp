/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 01:08:59 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 01:12:50 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include "Enemy.hpp"

/*-------------- Constructors -------------*/
RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/


/*------------------ Seter -----------------*/


/*------------------ Other -----------------*/
void			RadScorpion::takeDamage(int amount) {
	if (amount > 0)
		this->_hp -= amount;
}
