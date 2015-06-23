/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 20:18:20 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:57:20 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*-------------- Constructors -------------*/
Form::Form(std::string name, int const gradeToSignIt, int const gradeToExecuteIt) : _name(name), _signed(false), _gradeToSignIt(gradeToSignIt), _gradeToExecuteIt(gradeToExecuteIt) {
	//std::cout << "Form: Default constructor" << std::endl;
	try
	{
		if (this->_gradeToSignIt < 1 || this->_gradeToExecuteIt < 1)
			throw Form::GradeTooHighException();
		else if (this->_gradeToSignIt > 150 || this->_gradeToExecuteIt > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.errorGrade() << " for this Form" << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.errorGrade() << " for this Form" << std::endl;
	}
	return ;
}

/*--------------- Destructors --------------*/
Form::~Form(void) {
	//std::cout << "Form: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/
std::string const		Form::getName(void) const {
	return (this->_name);
}
bool					Form::getSigned(void) const {
	return (this->_signed);
}
int						Form::getGradeToSignIt(void) const {
	return (this->_gradeToSignIt);
}
int						Form::getGradeToExecuteIt(void) const {
	return (this->_gradeToExecuteIt);
}

/*------------------ Seter -----------------*/


/*---------------- Exceptions --------------*/

Form::GradeTooHighException::GradeTooHighException(void) throw() {
	return ;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw() {
	return ;
}
Form::GradeTooLowException::GradeTooLowException(void) throw() {
	return ;
}
Form::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}
Form::AlreadySignedException::AlreadySignedException(void) throw() {
	return ;
}
Form::AlreadySignedException::~AlreadySignedException(void) throw() {
	return ;
}



/*------------------ Other -----------------*/
void			Form::beSigned(Bureaucrat const & b) {
	if (b.getGrade() > this->_gradeToSignIt)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}
