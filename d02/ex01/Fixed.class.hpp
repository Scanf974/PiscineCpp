/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 13:05:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 21:24:05 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP 
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const raw);
		Fixed(float const raw);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed		& operator=(Fixed const & rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);

		int			toInt(void) const;
		float		toFloat(void) const;

	private:
		int					_fixedPoint;
		static int const	_nbFractorial;

	private:
};

std::ostream		& operator<<( std::ostream & o, Fixed const & rsh );

#endif
