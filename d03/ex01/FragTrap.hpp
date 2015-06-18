/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:35 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 21:54:18 by bsautron         ###   ########.fr       */
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

		unsigned int	getHitPoints(void) const;
		unsigned int	getMaxHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getMaxEnergyPoints(void) const;
		unsigned int	getLevel(void) const;
		std::string		getName(void) const;
		unsigned int	getMaleeAttackDamage(void) const;
		unsigned int	getRangedAttackDamage(void) const;
		unsigned int	getArmorDamageReduction(void) const;

		void			rangedAttack(std::string const & target) const;
		void			maleeAttack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			bifle(std::string const & target);
		void			coupDeCul(std::string const & target);
		void			fiste(std::string const & target);
		void			fFontaine(std::string const & target);
		void			gizz(std::string const & target);
		void			vaulthunter_dot_exe(std::string const & target);

	private:
		unsigned int	_hitPoints;
		unsigned int	_maxHitPoints;
		unsigned int	_energyPoints;
		unsigned int	_maxEnergyPoints;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_maleeAttackDamage;
		unsigned int	_rangedAttackDamage;
		unsigned int	_armorDamageReduction;

};

typedef void (FragTrap::*attacksSpec)(std::string const &);

#endif

