/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:18:06 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 02:40:33 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm(void);

		virtual void    execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm		& operator=(ShrubberyCreationForm const & right);
		std::string		_target;

};

#endif
