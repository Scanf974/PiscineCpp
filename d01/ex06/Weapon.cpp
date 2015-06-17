/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 20:39:07 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 17:09:23 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "weapon constructor" << std::endl;
	return ;
}

Weapon::Weapon(void) {
	return ;
}

Weapon::~Weapon(void) {
	std::cout << "weapon destructor" << std::endl;
	return ;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string const	& Weapon::getType(void){
	std::string		&ref_str = this->_type;
	return (ref_str);
}
