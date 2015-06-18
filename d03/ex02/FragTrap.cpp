/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 00:12:21 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/*-------------- Constructors -------------*/
FragTrap::FragTrap(void) : ClapTrap() {
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_maleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap: Default constructor" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_maleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

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
	std::cout << "FragTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/

/*------------------ Geter -----------------*/

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/

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
