/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 20:37:21 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 17:11:10 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);

		std::string const	&getType(void);
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif
