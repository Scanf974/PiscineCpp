/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 21:46:49 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 00:46:57 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*-------------- Constructors -------------*/
Span::Span(unsigned int n) : _lenMax(n) {
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
	if (this->_cont.size() < this->_lenMax)
		this->_cont.push_back(nb);
	else
		throw std::exception();
}

int				Span::longestSpan(void) {

	if (this->_cont.size() > 0)
	{
		std::list<int>		tmp = this->_cont;
		tmp.sort();
		return (tmp.back() - tmp.front());
	}
	return (0);
}

int				Span::shortestSpan(void) {
	int					range = 0;
	int					i = 0;
	std::list<int>		tmp = this->_cont;
	int					save = 0;

	if (this->_cont.size() > 0)
	{
		tmp.sort();
		std::list<int>::iterator		beg = tmp.begin();
		std::list<int>::iterator		end = tmp.end();
		range = this->longestSpan();
		for (; beg != end; beg++)
		{
			if (i != 0)
			{
				if (tmp.front() - save < range)
					range = tmp.front() - save;
			}
			save = tmp.front();
			tmp.pop_front();
			i++;
		}
	}
	return (range);
}
