/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 01:58:41 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*-------------- Constructors -------------*/
NinjaTrap::NinjaTrap(void) : ClapTrap() {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_maleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NinjaTrap: Default constructor" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_maleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "NinjaTrap: Default2 constructor" << std::endl;
		return ;
	}


NinjaTrap::NinjaTrap(NinjaTrap const & src) {
	//std::cout << "NinjaTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
NinjaTrap::~NinjaTrap(void) {
	std::cout << "NinjaTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/

/*------------------ Geter -----------------*/

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/

void		NinjaTrap::ninjaShoebox(ClapTrap & ref) {
	std::cout << this->_name << " do an action of " << ref.getName() << ", he's a Clap" << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(ScavTrap & ref) {
	std::cout << this->_name << " do an action of " << ref.getName() << ", he's a Scav" << std::endl;
	return ;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap & ref) {
	std::cout << this->_name << " do an action of " << ref.getName() << ", he's a Ninja" << std::endl;
	return ;
}
