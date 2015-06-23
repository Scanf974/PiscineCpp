/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 03:25:25 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:58:01 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*-------------- Constructors -------------*/
Intern::Intern(void) {
	//std::cout << "Intern: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
Intern::~Intern(void) {
	//std::cout << "Intern: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/

Form			*Intern::makeForm(std::string nameForm, std::string target) {
	Form	*f = 0;
	try
	{
		if (nameForm.compare("robotomy request") == 0) {
			f = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
		}
		else if (nameForm.compare("residential pardon") == 0) {
			f = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
		}
		else if (nameForm.compare("shrubbery creation") == 0) {
			f = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << f->getName() << std::endl;
		}
		else
			throw Intern::someRandException();
	}
	catch (Intern::someRandException & e)
	{
		std::cout << e.error() << " " << nameForm << std::endl;
	}
	return f;
}

Intern::someRandException::someRandException(void) throw() {
	return ;
}
Intern::someRandException::~someRandException(void) throw() {
	return ;
}
