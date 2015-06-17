/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 13:05:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 13:24:37 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP 
# define FIXED_CLASS_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &		operator=(Fixed const & rhs);

	private:

};

#endif

