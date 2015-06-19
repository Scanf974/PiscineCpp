/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 01:03:36 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 01:14:23 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		virtual ~RadScorpion(void);
		virtual void	takeDamage(int amount);


	private:
		RadScorpion(RadScorpion const & src);

		RadScorpion		& operator=(RadScorpion const & right);

};

#endif

