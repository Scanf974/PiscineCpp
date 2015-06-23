/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:31:45 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:10:22 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*-------------- Constructors -------------*/
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 25, 5),  _target(target) {
	//std::cout << "PresidentialPardonForm: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
PresidentialPardonForm::~PresidentialPardonForm(void) {
	//std::cout << "PresidentialPardonForm: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void			PresidentialPardonForm::execute(Bureaucrat const & executor) const {
		if (this->getSigned())
            throw Form::AlreadySignedException();
        if (executor.getGrade() > 5)
            throw Form::GradeTooLowException();
        else
        {
			std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
        }
}
