/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:20:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:15:29 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

/*-------------- Constructors -------------*/
PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	//std::cout << "PlasmaRifle: Default constructor" << std::endl;
	return ;
}

/*--------------- Destructors --------------*/
PlasmaRifle::~PlasmaRifle(void) {
	//std::cout << "PlasmaRifle: Destructor" << std::endl;
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
