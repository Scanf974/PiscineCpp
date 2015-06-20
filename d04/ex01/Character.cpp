/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 01:15:23 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 03:08:41 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

/*-------------- Constructors -------------*/
Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(0) {
	//std::cout << "Character: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
Character::~Character(void) {
	//std::cout << "Character: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
std::ostream	& operator<<(std::ostream & o, Character const & right) {
	if (right.getWeapon())
		o << right.getName() << " has " << right.getAP() << " AP and wields a " << right.getWeapon()->getName() << std::endl;
	else
		o << right.getName() << " has " << right.getAP() << " AP and is unarmed" << std::endl;
	return (o);
}


/*------------------ Geter -----------------*/
std::string const	Character::getName(void) const {
	return (this->_name);
}

AWeapon				*Character::getWeapon(void) const {
	return (this->_weapon);
}

int					Character::getAP(void) const {
	return (this->_AP);
}

/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			Character::recoverAP(void) {
	if (this->_AP + 10 > 40)
		this->_AP = 40;
	else
		this->_AP += 10;
	return ;
}

void			Character::equip(AWeapon *weapon) {
	this->_weapon = weapon;
	return ;
}

void			Character::attack(Enemy *enemy) {
	if (this->_weapon) {
		if (this->_AP - this->_weapon->getAPCost() > 0) {
			std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
			this->_AP -= this->_weapon->getAPCost();
			this->_weapon->attack();
			enemy->takeDamage(this->_weapon->getDamage());
			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
	return ;
}

