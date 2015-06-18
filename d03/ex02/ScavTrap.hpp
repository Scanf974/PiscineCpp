/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:00:35 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 00:23:38 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP 
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);


		void			poop(std::string const & target);
		void			pee(std::string const & target);
		void			eat(std::string const & target);
		void			sit(std::string const & target);
		void			standUp(std::string const & target);
		void			challengeNewcomer(std::string const & target);

	private:
};

typedef void (ScavTrap::*newcomer)(std::string const &);

#endif

