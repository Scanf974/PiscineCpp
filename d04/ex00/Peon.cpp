/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:51:42 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:08:38 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"

/*-------------- Constructors -------------*/
Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog Zog." << std::endl;
	return ;
}

Peon::Peon(Peon const & src) : Victim(src) {
	//std::cout << "Peon: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
Peon		& Peon::operator=(Peon const & right) {
	//std::cout << "Peon: Assignement operator" << std::endl;

	if (this != &right) {
		this->getName() = right.getName();
	}
	return (*this);
}


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			Peon::getPolymorphed(void) const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
	return ;

}
