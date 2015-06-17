/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 13:05:15 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 21:27:52 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

float	power(float base, float exponent)
{
	if ( 0 == exponent)
		return 1;
	else if ( exponent < 0 )
		return 1 / power(base, -exponent);
	else if ( 1 != exponent)
		base *= power(base, exponent - 1);

	return base;
}

int const		Fixed::_nbFractorial= 8;

//Constructors && destructor

Fixed::Fixed(void) : _fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const raw) {
	this->_fixedPoint = raw << Fixed::_nbFractorial;
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const raw) {
	this->_fixedPoint = roundf(raw *  power(2, Fixed::_nbFractorial));
	std::cout << "Float constructor called" << std::endl;
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

//End of Con/de-structor

int			Fixed::getRawBits(void) const {
	return (this->_fixedPoint);
}

void		Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

int			Fixed::toInt(void) const{
	return (this->_fixedPoint >> Fixed::_nbFractorial);
}

float		Fixed::toFloat(void) const{
	return (this->_fixedPoint * power(2, -Fixed::_nbFractorial));
}

//Operator

Fixed		& Fixed::operator=( Fixed const & rhs) {
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_fixedPoint = rhs.getRawBits();
	return ( *this );
}

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}
