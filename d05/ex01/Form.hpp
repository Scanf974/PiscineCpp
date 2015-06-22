/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 20:18:13 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/22 23:17:02 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
# define FORM_HPP

# include <iostream>

class Bureaucrat;

# include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(std::string name, int const gradeToSignIt, int const gradeToExecuteIt);
		~Form(void);

		std::string const		getName(void) const;
		bool					getSigned(void) const;
		int						getGradeToSignIt(void) const;
		int						getGradeToExecuteIt(void) const;

		void					beSigned(Bureaucrat const & b);

		class       GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void) throw();
			GradeTooHighException(GradeTooHighException const & src) throw();
			~GradeTooHighException(void) throw();


			const char          *errorGrade(void){
				return ("Grade too hight!");
			}

		private:
			GradeTooHighException   & operator=(GradeTooHighException const & right);

	};

		class       GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void) throw();
			GradeTooLowException(GradeTooLowException const & src) throw();
			~GradeTooLowException(void) throw();

			const char          *errorGrade(void) {
				return ("Grade too low!");
			}


		private:
			GradeTooLowException    & operator=(GradeTooLowException const & right);
	};


	private:
		Form(void);
		Form(Form const & src);
		Form		& operator=(Form const & right);

		std::string const	_name;
		bool				_signed;
		int const			_gradeToSignIt;
		int	const			_gradeToExecuteIt;


};

#endif

