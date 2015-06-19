/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:10:25 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 15:49:37 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class	Sorcerer
{
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		Sorcerer		& operator=(Sorcerer const & right);

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		void			polymorph(Victim const & victim) const;

	private:
		Sorcerer(void);

		std::string			_name;
		std::string			_title;

};

std::ostream	& operator<<(std::ostream & o, Sorcerer const & right);

#endif

