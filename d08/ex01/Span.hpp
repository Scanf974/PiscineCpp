/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 21:46:40 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 00:33:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_HPP 
# define SPAN_CLASS_HPP

# include <iostream>
# include <list>

class	Span
{
	public:
		Span(unsigned int n);
		Span(Span const & src);
		~Span(void);

		Span		& operator=(Span const & right);

		void		addNumber(int nb);
		int			shortestSpan(void);
		int			longestSpan(void);

	private:
		Span(void);

		std::list<int>			_cont;
		unsigned int 			_lenMax;
};

#endif

