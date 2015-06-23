/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 19:00:39 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:05:11 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*-------------- Constructors -------------*/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150) {
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

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
	return ;
}


/*--------------- Destructors --------------*/
Bureaucrat::~Bureaucrat(void) {
	//std::cout << "Bureaucrat: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/
Bureaucrat      & Bureaucrat::operator=(Bureaucrat const & right) {
	if (this != &right)
	{
		//this->_name = right.getName();
		this->_grade = right.getGrade();
	}
	return (*this);
}

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

const char		*Bureaucrat::GradeTooHighException::errorGrade(void) {
	return ("Grade too hight!");
}

const char		*Bureaucrat::GradeTooLowException::errorGrade(void) {
	return ("Grade too low!");
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
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signs " << f.getName() << std::endl;

	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << this->_name << " cannot sign " << f.getName() << " because He's low grade" << std::endl;
	}

}

void				Bureaucrat::executeForm(Form const & form) {
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
    catch (Form::GradeTooLowException & e)
    {
        std::cout << e.errorGrade() << " for " << form.getName() << std::endl;
    }
    catch (Form::AlreadySignedException & e)
    {
        std::cout << e.errorSigned() << " for " << form.getName() << std::endl;
    }
}
