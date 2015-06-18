/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 22:05:54 by bsautron         ###   ########.fr       */
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
	_maleeAttackDamage(30),
	_rangedAttackDamage(20),
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
	_maleeAttackDamage(30),
	_rangedAttackDamage(20),
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
		this->_maleeAttackDamage = right.getMaleeAttackDamage();
		this->_rangedAttackDamage = right.getRangedAttackDamage();
		this->_armorDamageReduction = right.getArmorDamageReduction();
	}
	return (*this);
}

/*------------------ Geter -----------------*/
unsigned int		FragTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}
unsigned int		FragTrap::getMaxHitPoints(void) const {
	return (this->_maxHitPoints);
}
unsigned int		FragTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
unsigned int		FragTrap::getMaxEnergyPoints(void) const {
	return (this->_maxEnergyPoints);
}
unsigned int		FragTrap::getLevel(void) const {
	return (this->_level);
}
std::string			FragTrap::getName(void) const {
	return (this->_name);
}
unsigned int		FragTrap::getMaleeAttackDamage(void) const {
	return (this->_maleeAttackDamage);
}
unsigned int		FragTrap::getRangedAttackDamage(void) const {
	return (this->_rangedAttackDamage);
}
unsigned int		FragTrap::getArmorDamageReduction(void) const {
	return (this->_armorDamageReduction);
}

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/
void				FragTrap::rangedAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void				FragTrap::maleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at malee, causing " <<     this->_maleeAttackDamage << " points of damage !" << std::endl;	
	return ;
}

void				FragTrap::takeDamage(unsigned int amount) {
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

void				FragTrap::beRepaired(unsigned int amount) {
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

void				FragTrap::bifle(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " do a Bifle on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
}

void				FragTrap::coupDeCul(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " do a Coup de Cul on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
}

void				FragTrap::fiste(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " do a Fiste on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
}

void				FragTrap::fFontaine(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " do a F. Fontaine on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
}

void				FragTrap::gizz(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " do a Gizz on " << target << "for 25 points of energies !" << std::endl;	
		this->_energyPoints -= 25;
}

void				FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int				pos;
	attacksSpec		attacks[5];

	attacks[0] = &FragTrap::bifle;
	attacks[1] = &FragTrap::coupDeCul;
	attacks[2] = &FragTrap::fiste;
	attacks[3] = &FragTrap::fFontaine;
	attacks[4] = &FragTrap::gizz;

	pos = rand() % 5;
	if (25 < this->_energyPoints)
		(this->*attacks[pos])(target);
	else
		std::cout << "Not enought energy !" << std::endl;
	return ;
}
