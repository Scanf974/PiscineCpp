/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:20:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:29:19 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

/*-------------- Constructors -------------*/
PlasmaRifle::PlasmaRifle(int apcost, int damage) : AWeapon("Plasma Rifle", apcost, damage) {
	std::cout << "PlasmaRifle: Copy constructor" << std::endl;
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	//std::cout << "PlasmaRifle: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
PlasmaRifle::~PlasmaRifle(void) {
	std::cout << "PlasmaRifle: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
PlasmaRifle		& PlasmaRifle::operator=(PlasmaRifle const & right) {
	//std::cout << "PlasmaRifle: Assignement operator" << std::endl;

	if (this != &right)
		(void)right;
	return (*this);
}


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return ;
}
