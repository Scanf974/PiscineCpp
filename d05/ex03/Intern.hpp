/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 03:20:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/23 03:57:36 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_CLASS_HPP 
# define INTERN_CLASS_HPP

# include <iostream>
# include "Form.hpp"

class	Intern
{
	public:
		Intern(void);
		~Intern(void);

      class       someRandException : public std::exception
    {
        public:
            someRandException(void) throw();
            someRandException(someRandException const & src) throw();
            ~someRandException(void) throw();

            const char          *error(void);

        private:
            someRandException   & operator=(someRandException const & right);

    };

		Form		*makeForm(std::string nameForm, std::string target);


	private:
		Intern(Intern const & src);
		Intern		& operator=(Intern const & right);

};

#endif

