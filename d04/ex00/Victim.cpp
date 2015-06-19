/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:33:30 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 16:23:05 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*-------------- Constructors -------------*/
Victim::Victim(void) {
	//std::cout << "Victim: Default constructor" << std::endl;
	return ;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some ramdom victim called " << this->_name << " just popped !" << std::endl;
	return ;
}

Victim::Victim(Victim const & src) {
	//std::cout << "Victim: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
Victim::~Victim(void) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
Victim		& Victim::operator=(Victim const & right) {
	//std::cout << "Victim: Assignement operator" << std::endl;

	if (this != &right) {
		this->_name = right.getName();
	}
	return (*this);
}

std::ostream    & operator<<(std::ostream & o, Victim const & right) {
	o << "I'm " << right.getName() << ", and i like otters !" << std::endl;
	return (o);
}

/*------------------ Geter -----------------*/
std::string		Victim::getName(void) const {
	return (this->_name);
}


/*------------------ Seter -----------------*/



/*------------------ Other -----------------*/
void			Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}
