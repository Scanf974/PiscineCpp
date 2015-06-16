/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:44:28 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 15:43:24 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class	ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);

		void	announce(void);

	private:
		int			_nbZombie;
		Zombie		*_zeub;
};

#endif
