/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 20:18:13 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:04:04 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP 
# define FORM_HPP

class Bureaucrat;

# include <iostream>
# include "Bureaucrat.hpp"

class	Form
{
	public:
		Form(std::string name, int const gradeToSignIt, int const gradeToExecuteIt);
		virtual ~Form(void);

		std::string const		getName(void) const;
		bool					getSigned(void) const;
		int						getGradeToSignIt(void) const;
		int						getGradeToExecuteIt(void) const;

		void					beSigned(Bureaucrat const & b);

		virtual void			execute(Bureaucrat const & executor) const = 0;

		class       GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void) throw();
			GradeTooHighException(GradeTooHighException const & src) throw();
			~GradeTooHighException(void) throw();


			const char          *errorGrade(void);

		private:
			GradeTooHighException   & operator=(GradeTooHighException const & right);

	};

		class       GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void) throw();
			GradeTooLowException(GradeTooLowException const & src) throw();
			~GradeTooLowException(void) throw();

			const char          *errorGrade(void);


		private:
			GradeTooLowException    & operator=(GradeTooLowException const & right);
	};

		class       AlreadySignedException : public std::exception
	{
		public:
			AlreadySignedException(void) throw();
			AlreadySignedException(AlreadySignedException const & src) throw();
			~AlreadySignedException(void) throw();


			const char          *errorSigned(void);

		private:
			AlreadySignedException   & operator=(AlreadySignedException const & right);

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

