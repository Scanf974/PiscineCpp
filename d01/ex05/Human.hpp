/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:36:01 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 20:05:39 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class	Human
{
	public:
		Human(void);
		~Human(void);

		std::string	identify(void);
		Brain const	&getBrain(void) const;

	private:
		Brain const _brain;
};

#endif
