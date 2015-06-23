/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:30:23 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 01:12:38 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBO_HPP 
# define ROBO_HPP

# include <iostream>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm(void);

		virtual void    execute(Bureaucrat const & executor) const;

	private:
		RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm		& operator=(RobotomyRequestForm const & right);
		std::string			_target;

};

#endif

