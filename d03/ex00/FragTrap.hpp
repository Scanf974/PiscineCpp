/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:35 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 17:00:13 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
# define FRAGTRAP_HPP

# include <iostream>

class	FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap		& operator=(FragTrap const & right);

		int				getHitPoints(void) const;
		int				getMaxHitPoints(void) const;
		int				getEnergyPoints(void) const;
		int				getMaxEnergyPoints(void) const;
		int				getLevel(void) const;
		std::string		getName(void) const;
		int				getIntMaleeAttackDamage(void) const;
		int				getRangeAttackDamage(void) const;
		int				getArmorDamageReduction(void) const;


	private:
		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;
		std::string	_name;
		int			_intMaleeAttackDamage;
		int			_rangeAttackDamage;
		int			_armorDamageReduction;

};

#endif

