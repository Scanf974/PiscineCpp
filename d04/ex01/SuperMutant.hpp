/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 00:45:32 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:59:21 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP 
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		virtual ~SuperMutant(void);
		virtual void	takeDamage(int amount);

	private:
		SuperMutant(SuperMutant const & src);

		SuperMutant		& operator=(SuperMutant const & right);

};

#endif

