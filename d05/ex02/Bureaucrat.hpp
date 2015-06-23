/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 17:05:53 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:04:45 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP 
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

# include "Form.hpp"

class	Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);


		std::string const	getName(void) const;
		int					getGrade(void) const;

		void				incrementGrade(void);
		void				decrementGrade(void);

		void				signForm(Form & f);
		void				executeForm(Form const & form);

		class		GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const & src) throw();
				~GradeTooHighException(void) throw();


				const char			*errorGrade(void){
					return ("Grade too hight!");
				}

			private:
				GradeTooHighException	& operator=(GradeTooHighException const & right);

		};

		class		GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const & src) throw();
				~GradeTooLowException(void) throw();

				const char			*errorGrade(void) {
					return ("Grade too low!");
				}

			private:
				GradeTooLowException	& operator=(GradeTooLowException const & right);
		};


	private:
		Bureaucrat		& operator=(Bureaucrat const & right);
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat(void);

		std::string const	_name;
		int					_grade;

};

std::ostream		& operator<<(std::ostream & o, Bureaucrat const & right);

#endif
