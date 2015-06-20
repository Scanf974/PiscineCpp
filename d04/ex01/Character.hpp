/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 01:15:18 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 02:54:25 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP 
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	public:
		Character(std::string const & name);
		~Character(void);

		std::string const	getName(void) const;
		AWeapon				*getWeapon(void) const;
		int					getAP(void) const;

		void	recoverAP(void);
		void	equip(AWeapon *weapon);
		void	attack(Enemy *enemy);


	private:
		Character(void);
		Character(Character const & src);

		Character		& operator=(Character const & right);

	protected:
		std::string		_name;
		int				_AP;
		AWeapon			*_weapon;

};

std::ostream	& operator<<(std::ostream & o, Character const & right);

#endif

