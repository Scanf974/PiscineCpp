/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 13:05:15 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 21:03:44 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const		Fixed::_nbFractorial = 8;

Fixed::Fixed(void) : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void		Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

Fixed		& Fixed::operator=( Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_fixedPoint = rhs.getRawBits();
	return ( *this );
}
