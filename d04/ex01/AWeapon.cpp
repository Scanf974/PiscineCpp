/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:11:27 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 03:02:39 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*-------------- Constructors -------------*/
AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
//	std::cout << "A weapon: " << this->_name << " | " << this->_apcost << " Ap cost | " << this->_damage << " | created." << std::endl;
	return ;
}

/*--------------- Destructors --------------*/
AWeapon::~AWeapon(void) {
	std::cout << "AWeapon: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/

/*------------------ Geter -----------------*/
std::string const	AWeapon::getName(void) const {
	return (this->_name);
}
int				AWeapon::getAPCost(void) const {
	return (this->_apcost);
}
int				AWeapon::getDamage(void) const {
	return (this->_damage);
}



/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/

