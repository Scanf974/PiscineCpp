/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 17:00:27 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*-------------- Constructors -------------*/
FragTrap::FragTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name("No-Name"),
	_intMaleeAttackDamage(30),
	_rangeAttackDamage(20),
	_armorDamageReduction(5) {
	std::cout << "FragTrap: Default constructor" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(100),
	_maxEnergyPoints(100),
	_level(1),
	_name(name),
	_intMaleeAttackDamage(30),
	_rangeAttackDamage(20),
	_armorDamageReduction(5) {

	std::cout << "FragTrap: Default2 constructor" << std::endl;
		return ;
	}


FragTrap::FragTrap(FragTrap const & src) {
	//std::cout << "FragTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
FragTrap::~FragTrap(void) {
	//std::cout << "FragTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/
FragTrap		& FragTrap::operator=(FragTrap const & right) {
	//std::cout << "FragTrap: Assignement operator" << std::endl;

	if (this != &right) {
		this->_hitPoints = right.getHitPoints();
		this->_maxHitPoints = right.getMaxHitPoints();
		this->_energyPoints = right.getEnergyPoints();
		this->_maxEnergyPoints = right.getMaxEnergyPoints();
		this->_level = right.getLevel();
		this->_name = right.getName();
		this->_intMaleeAttackDamage = right.getIntMaleeAttackDamage();
		this->_rangeAttackDamage = right.getRangeAttackDamage();
		this->_armorDamageReduction = right.getArmorDamageReduction();
	}
	return (*this);
}

/*------------------ Geter -----------------*/
int					FragTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
int					FragTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
int					FragTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
int					FragTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
int					FragTrap::getLevel(void) const {
	return (this->_level);
}
std::string			FragTrap::getName(void) const {
	return (this->_name);
}
int					FragTrap::getIntMaleeAttackDamage(void) const {
	return (this->_intMaleeAttackDamage);
}
int					FragTrap::getRangeAttackDamage(void) const {
	return (this->_rangeAttackDamage);
}
int					FragTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/
