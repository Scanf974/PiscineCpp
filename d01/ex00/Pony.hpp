/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:16:12 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 11:36:41 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony
{
	public:
		Pony(std::string name, int life, int nbFeet);
		~Pony(void);

	private:
		int			_life;
		std::string	_name;
		int			_nbFeet;
};

#endif
