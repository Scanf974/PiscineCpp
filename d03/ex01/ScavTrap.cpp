/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 21:15:16 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*-------------- Constructors -------------*/
ScavTrap::ScavTrap(void) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name("No-Name"),
	_maleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3) {
	std::cout << "ScavTrap: Default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) :
	_hitPoints(100),
	_maxHitPoints(100),
	_energyPoints(50),
	_maxEnergyPoints(50),
	_level(1),
	_name(name),
	_maleeAttackDamage(20),
	_rangedAttackDamage(15),
	_armorDamageReduction(3) {

	std::cout << "ScavTrap: Default2 constructor" << std::endl;
		return ;
	}


ScavTrap::ScavTrap(ScavTrap const & src) {
	//std::cout << "ScavTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
ScavTrap::~ScavTrap(void) {
	//std::cout << "ScavTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/
ScavTrap		& ScavTrap::operator=(ScavTrap const & right) {
	//std::cout << "ScavTrap: Assignement operator" << std::endl;

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
unsigned int		ScavTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int		ScavTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int		ScavTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int		ScavTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int		ScavTrap::getLevel(void) const {
	return (this->_level);
}
std::string			ScavTrap::getName(void) const {
	return (this->_name);
}
unsigned int		ScavTrap::getMaleeAttackDamage(void) const {
	return (this->_maleeAttackDamage);
}
unsigned int		ScavTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int		ScavTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/
void				ScavTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void				ScavTrap::maleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at malee, causing " <<     this->_maleeAttackDamage << " points of damage !" << std::endl;	
	return ;
}

void				ScavTrap::takeDamage(unsigned int amount) {
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

void				ScavTrap::beRepaired(unsigned int amount) {
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

void				ScavTrap::vaulthunter_dot_exe(std::string const & target) {
	int			pos;
	std::string	att[5];

	att[0] = "Bifle";
	att[1] = "Coup de cul";
	att[2] = "Fiste";
	att[3] = "F. Fontaine";
	att[4] = "Gizz";

	pos = rand() % 5;
	if (25 < this->_energyPoints) {
		std::cout << "FR4G-TP " << this->_name << " do a " << att[pos] << " on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
	}
	else
		std::cout << "Not enought energy to do " << att[pos] << " on " << target << " !" << std::endl;



	return ;
}
