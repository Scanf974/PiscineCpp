/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:22 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 00:25:08 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*-------------- Constructors -------------*/
ScavTrap::ScavTrap(void) : ClapTrap() {
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_maleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ScavTrap: Default constructor" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_energyPoints = 50;
	this->_maxEnergyPoints =50;
	this->_maleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout << "ScavTrap: Default2 constructor" << std::endl;
		return ;
	}


ScavTrap::ScavTrap(ScavTrap const & src) {
	std::cout << "ScavTrap: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
ScavTrap::~ScavTrap(void) {
	//std::cout << "ScavTrap: Destructor" << std::endl;
	return ;
}

/*---------------- Operators ---------------*/

/*------------------ Geter -----------------*/

/*------------------ Seter -----------------*/

/*------------------ Other -----------------*/

void				ScavTrap::poop(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " challenges " << target << " to poop !" << std::endl;	
}

void				ScavTrap::pee(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " challenges " << target << " to pee !" << std::endl;	
}

void				ScavTrap::eat(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " challenges " << target << " to eat !" << std::endl;	
}

void				ScavTrap::sit(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " challenges " << target << " to sit !" << std::endl;	
}

void				ScavTrap::standUp(std::string const & target) {
		std::cout << "FR4G-TP " << this->_name << " challenges " << target << " to stand up !" << std::endl;	
}

void				ScavTrap::challengeNewcomer(std::string const & target) {
	int				pos;
	newcomer		newcomer[5];

	newcomer[0] = &ScavTrap::poop;
	newcomer[1] = &ScavTrap::pee;
	newcomer[2] = &ScavTrap::eat;
	newcomer[3] = &ScavTrap::sit;
	newcomer[4] = &ScavTrap::standUp;

	pos = rand() % 5;
	(this->*newcomer[pos])(target);
	return ;
}
