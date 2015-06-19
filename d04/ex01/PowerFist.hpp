/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 00:11:57 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:12:16 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_CLASS_HPP 
# define POWERFIRST_CLASS_HPP

# include <iostream>
# include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		virtual ~PowerFist(void);

		PowerFist		& operator=(PowerFist const & right);

		virtual void	attack(void) const;

	private:
		PowerFist(PowerFist const & src);

};

#endif

