/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:11:27 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:22:13 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*-------------- Constructors -------------*/
AWeapon::AWeapon(void) {
	//std::cout << "AWeapon: Default constructor" << std::endl;
	return ;
}

AWeapon::AWeapon(str::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
	std::cout << "A weapon: " << this->_name << " | " << this->_apcost << " Ap cost | " << this->_damage < " | created." << std::endl;
	return ;
}

AWeapon::AWeapon(AWeapon const & src) {
	//std::cout << "AWeapon: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
AWeapon::~AWeapon(void) {
	std::cout << "AWeapon: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
AWeapon		& AWeapon::operator=(AWeapon const & right) {
	//std::cout << "AWeapon: Assignement operator" << std::endl;

	//if (this != &right)
		//(void)right;
	return (*this);
}


/*------------------ Geter -----------------*/
int				AWeapon::getAPCost(void) const {
	return (this->_apcost);
}
int				AWeapon::getDamage(void) const {
	return (this->_damage);
}



/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/

