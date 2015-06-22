/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 19:00:39 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/22 23:09:11 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*-------------- Constructors -------------*/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade + 1 > 150) {
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}

	return ;
}


/*--------------- Destructors --------------*/
Bureaucrat::~Bureaucrat(void) {
	//std::cout << "Bureaucrat: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
std::ostream		& operator<<(std::ostream & o, Bureaucrat const & right) {
	o << right.getName() << ", bureaucrat grade " << right.getGrade();
	return (o);
}


/*------------------ Geter -----------------*/
std::string const	Bureaucrat::getName(void) const {
	return (this->_name);
}
int					Bureaucrat::getGrade(void) const {
	return (this->_grade);
}



/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw() {
	return ;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw() {
	return ;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}

void				Bureaucrat::incrementGrade(void) {
	try
	{
		if (this->_grade - 1 < 1)
		{
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->_grade--;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
}

void				Bureaucrat::decrementGrade(void) {
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.errorGrade() << std::endl;
	}
}

void				Bureaucrat::signForm(Form & f) {
	f.beSigned(*this);
}
