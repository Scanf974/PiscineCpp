/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 21:46:49 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 00:35:43 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*-------------- Constructors -------------*/
Span::Span(unsigned int n) : _size(0), _lenMax(n) {
	//std::cout << "Span: Default constructor" << std::endl;
	return ;
}

Span::Span(Span const & src) {
	//std::cout << "Span: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
Span::~Span(void) {
	//std::cout << "Span: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
Span		& Span::operator=(Span const & right) {
	//std::cout << "Span: Assignement operator" << std::endl;

	if (this != &right)
		(void)right;
	return (*this);
}

/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			Span::addNumber(int nb) {
	if (this->_size < this->_lenMax)
	{
		this->_cont.push_back(nb);
		this->_size++;
	}
	else
		throw std::exception();
}

int				Span::longestSpan(void) {
	int		range = 0;

	if (this->_size > 1)
	{
		std::list<int>::const_iterator	iBegin = this->_cont.begin();
	}
}
