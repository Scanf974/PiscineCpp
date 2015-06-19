/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 00:12:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-------------- Constructors -------------*/
ClapTrap::ClapTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_level(1),
	_name("No-Name") {
	std::cout << "ClapTrap: Default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_level(1),
	_name(name) {

	std::cout << "ClapTrap: Default2 constructor" << std::endl;
		return ;
	}


ClapTrap::ClapTrap(ClapTrap const & src) {
	//std::cout << "ClapTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/
ClapTrap		& ClapTrap::operator=(ClapTrap const & right) {
	//std::cout << "ClapTrap: Assignement operator" << std::endl;

	if (this != &right) {
		this->_hitPoints = right.getHitPoints();
		this->_maxHitPoints = right.getMaxHitPoints();
		this->_energyPoints = right.getEnergyPoints();
		this->_maxEnergyPoints = right.getMaxEnergyPoints();
		this->_level = right.getLevel();
		this->_name = right.getName();
		this->_maleeAttackDamage = right.getMaleeAttackDamage();
		this->_rangedAttackDamage = right.getRangedAttackDamage();
		this->_armorDamageReduction = right.getArmorDamageReduction();
	}
	return (*this);
}

/*------------------ Geter -----------------*/
unsigned int		ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int		ClapTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int		ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int		ClapTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int		ClapTrap::getLevel(void) const {
	return (this->_level);
}
std::string			ClapTrap::getName(void) const {
	return (this->_name);
}
unsigned int		ClapTrap::getMaleeAttackDamage(void) const {
	return (this->_maleeAttackDamage);
}
unsigned int		ClapTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int		ClapTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/
void				ClapTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void				ClapTrap::maleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at malee, causing " <<     this->_maleeAttackDamage << " points of damage !" << std::endl;	
	return ;
}

void				ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints < amount - this->_armorDamageReduction) {
		std::cout << "FR4G-TP " << this->_name << " take " << this->_hitPoints << " points of damage !" << std::endl;
		this->_hitPoints = 0;
	}
	else {
		std::cout << "FR4G-TP " << this->_name << " take " << amount - this->_armorDamageReduction << " points of damage !" << std::endl;
		this->_hitPoints -= amount - this->_armorDamageReduction;
	}
	return ;
}

void				ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount > this->_maxHitPoints) {
		std::cout << "FR4G-TP " << this->_name << " take " << this->_maxHitPoints - this->_hitPoints << " points of repairs !" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "FR4G-TP " << this->_name << " take " << amount << " points of repairs !" << std::endl;
		this->_hitPoints += amount;
	}
	return ;
}
