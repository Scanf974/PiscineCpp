/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 15:53:42 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 17:20:04 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

/*-------------- Constructors -------------*/
MutantStack::MutantStack(void) {
	//std::cout << "MutantStack: Default constructor" << std::endl;
	return ;
}

MutantStack::MutantStack(MutantStack const & src) {
	//std::cout << "MutantStack: Copy constructor" << std::endl;
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
MutantStack::~MutantStack(void) {
	//std::cout << "MutantStack: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
MutantStack		& MutantStack::operator=(MutantStack const & right) {
	//std::cout << "MutantStack: Assignement operator" << std::endl;

	if (this != &right)
		(void)right;
	return (*this);
}


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			MutantStack::push(T elem) {
	this->_cont.push_front(elem);
}

void			MutantStack::pop(void) {
	this->_cont.pop_front();
}

T				MutantStack::top(void) const {
	return (this->_cont.top());
}

size_t			MutantStack::size(coid) const {
	return (this->_cont.size());
}

bool			MutantStack::empty(void) const {
	return (this->_cont.empty());
}
