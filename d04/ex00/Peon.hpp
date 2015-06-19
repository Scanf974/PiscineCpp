/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 15:51:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:05:41 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP 
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class	Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(Peon const & src);
		~Peon(void);

		Peon			& operator=(Peon const & right);
		virtual void	getPolymorphed(void) const;

	private:
		Peon(void);

};

#endif

