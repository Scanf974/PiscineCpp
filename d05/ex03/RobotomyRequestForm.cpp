/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:29:25 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:13:20 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

/*-------------- Constructors -------------*/
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request Form", 72, 45), _target(target) {

	std::srand(std::time(0));
	//std::cout << "RobotomyRequestForm: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
RobotomyRequestForm::~RobotomyRequestForm(void) {
	//std::cout << "RobotomyRequestForm: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void				RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getSigned())
		throw Form::AlreadySignedException();
	else if (executor.getGrade() > 45)
		throw Form::GradeTooLowException();
	else
	{
		int		rand = std::rand() % 2;

		if (rand == 0)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->_target << " has been failure" << std::endl;
	}
}
