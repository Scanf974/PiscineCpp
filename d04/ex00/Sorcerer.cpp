/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:10:38 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 16:23:30 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*-------------- Constructors -------------*/
Sorcerer::Sorcerer(void) {
	//std::cout << "Sorcerer: Default constructor" << std::endl;
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	//std::cout << "Sorcerer: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
Sorcerer		& Sorcerer::operator=(Sorcerer const & right) {
	//std::cout << "Sorcerer: Assignement operator" << std::endl;

	if (this != &right) {
		this->_name = right.getName();
	}
	return (*this);
}

std::ostream	& operator<<(std::ostream & o, Sorcerer const & right) {
	o << "I am " << right.getName() << ", " << right.getTitle() << ", and i like ponies !" << std::endl;
	return (o);
}


/*------------------ Geter -----------------*/
std::string			Sorcerer::getName(void) const {
	return (this->_name);
}

std::string			Sorcerer::getTitle(void) const {
	return (this->_title);
}


/*------------------ Seter -----------------*/



/*------------------ Other -----------------*/
void				Sorcerer::polymorph(Victim const & victim) const {
	std::cout << this->_name << " try to polymorph " << victim.getName() << " !" << std::endl;
	return ;
}
