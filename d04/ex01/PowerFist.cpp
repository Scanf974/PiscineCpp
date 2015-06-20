/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:20:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 02:17:54 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

/*-------------- Constructors -------------*/
PowerFist::PowerFist(void) : AWeapon("PowerFist", 8, 50) {
	//std::cout << "PowerFist: Copy constructor" << std::endl;
	return ;
}

/*--------------- Destructors --------------*/
PowerFist::~PowerFist(void) {
	//std::cout << "PowerFist: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
PowerFist		& PowerFist::operator=(PowerFist const & right) {
	//std::cout << "PowerFist: Assignement operator" << std::endl;

	if (this != &right)
		(void)right;
	return (*this);
}


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}
