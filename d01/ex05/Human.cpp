/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:56:35 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 20:29:39 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Human.hpp"

Human::Human(void) {
	std::cout << "Human constructor" << std::endl;
	return ;
}

Human::~Human(void) {
	std::cout << "Human desstructor" << std::endl;
	return ;
}

std::string	Human::identify(void) {
	return (this->_brain.identify());
}

Brain const	&Human::getBrain(void) const {
	return (this->_brain);
}
