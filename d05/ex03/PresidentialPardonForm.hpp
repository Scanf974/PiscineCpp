/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 00:32:46 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 02:07:27 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENT_HPP 
# define PRESIDENT_HPP

# include <iostream>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm(void);

		virtual void	execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm		& operator=(PresidentialPardonForm const & right);
		std::string		_target;

};

#endif

