/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:17:57 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:11:06 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*-------------- Constructors -------------*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation Form", 145, 137), _target(target) {
	//std::cout << "ShrubberyCreationForm: Default constructor" << std::endl;
	return ;
}


/*--------------- Destructors --------------*/
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	//std::cout << "ShrubberyCreationForm: Destructor" << std::endl;
	return ;
}


/*---------------- Operators ---------------*/


/*------------------ Geter -----------------*/




/*------------------ Seter -----------------*/




/*------------------ Other -----------------*/
void				ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > 137)
		throw Form::GradeTooLowException();
	else if (this->getSigned())
	{
		std::string		file = this->_target + "_shrubbery";
		std::ofstream	ofs;

		ofs.open(file);

		ofs << "       ###" << std::endl;
		ofs << "      #o###" << std::endl;
		ofs << "    #####o###" << std::endl;
		ofs << "   #o#\\#|#/###" << std::endl;
		ofs << "    ###\\|/#o#" << std::endl;
		ofs << "     # }|{  #" << std::endl;
		ofs << "       }|{" << std::endl;
		ofs.close();
	}
	
}
