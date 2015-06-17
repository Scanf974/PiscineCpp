/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 13:05:15 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 01:07:10 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int const		Fixed::_nbFractorial= 8;

//Constructors && destructor

Fixed::Fixed(void) : _fixedPoint(0) {
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const raw) {
	this->_fixedPoint = raw << Fixed::_nbFractorial;
//	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const raw) {
	this->_fixedPoint = roundf(raw * (1 << Fixed::_nbFractorial));
//	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & src) {
//	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
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
	return ((float)this->_fixedPoint / (1 << Fixed::_nbFractorial));
}

//Operator

Fixed		& Fixed::operator=( Fixed const & rhs) {
	//std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_fixedPoint = rhs.getRawBits();
	return ( *this );
}


bool		Fixed::operator>( Fixed const & rhs) const {
	//std::cout << "Sup operator called" << std::endl;

	if (this->_fixedPoint > rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<( Fixed const & rhs)  const {
	//std::cout << "Inf operator called" << std::endl;

	if (this->_fixedPoint < rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator>=( Fixed const & rhs)  const {
	//std::cout << "Sup-equal operator called" << std::endl;

	if (this->_fixedPoint >= rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<=( Fixed const & rhs)  const {
	//std::cout << "Inf-equal operator called" << std::endl;

	if (this->_fixedPoint <= rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator==( Fixed const & rhs)  const {
	//std::cout << "Equal operator called" << std::endl;

	if (this->_fixedPoint == rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator!=( Fixed const & rhs)  const {
	//std::cout << "Not-equal operator called" << std::endl;

	if (this->_fixedPoint != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed		Fixed::operator+(Fixed const & rsh) const {
	return (Fixed(this->toFloat() + rsh.toFloat()));	
}

Fixed		Fixed::operator-(Fixed const & rsh) const {
	return (Fixed(this->toFloat() - rsh.toFloat()));	
}

Fixed		Fixed::operator*(Fixed const & rsh) const {
	return (Fixed(this->toFloat() * rsh.toFloat()));	
}

Fixed		Fixed::operator/(Fixed const & rsh) const {
	return (Fixed(this->toFloat() / rsh.toFloat()));	
}

Fixed		& Fixed::operator++(void) {
	this->_fixedPoint++;
	return (*this);
}

Fixed		Fixed::operator++(int) {
	Fixed	tmp(*this);
	++(*this);
	return (tmp);
}

Fixed		& Fixed::min(Fixed & a, Fixed & b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed const	& Fixed::min(Fixed const & a, Fixed const & b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed		& Fixed::max(Fixed & a, Fixed & b) {
	if (a > b)
		return (a);
	return (b);
}

Fixed const	& Fixed::max(Fixed const & a, Fixed const & b) {
	if (a > b)
		return (a);
	return (b);
}

std::ostream	&operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return (o);
}
