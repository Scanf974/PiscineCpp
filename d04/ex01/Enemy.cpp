/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 00:22:48 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 03:01:47 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*-------------- Constructors -------------*/
Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
//	std::cout << "Enemy: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
Enemy::~Enemy(void) {
//	std::cout << "Enemy: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/

/*------------------ Geter -----------------*/
std::string const		Enemy::getType(void) const {
	return (this->_type);
}

int						Enemy::getHP(void) const {
	return (this->_hp);
}


/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			Enemy::takeDamage(int amount) {
	if (amount > 0) {
		this->_hp -= amount;
	}
	return ;
}
