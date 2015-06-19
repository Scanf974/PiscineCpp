/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:19:54 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:08:45 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_HPP 
# define PLASMARIFLE_CLASS_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		virtual ~PlasmaRifle(void);

		PlasmaRifle		& operator=(PlasmaRifle const & right);

		virtual void	attack(void) const;

	private:
		PlasmaRifle(PlasmaRifle const & src);

};

#endif

