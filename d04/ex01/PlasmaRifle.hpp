/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:19:54 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:29:18 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP 
# define PLASMARIFLE_CLASS_HPP

# include <iostream>

class	PlasmaRifle
{
	public:
		PlasmaFifle(int apcost, int damage);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle(void);

		PlasmaRifle		& operator=(PlasmaRifle const & right);

		virtual void	attack(void) const;

	private:
		PlasmaRifle(void);

};

#endif

