/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 15:53:30 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 17:19:55 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTST_HPP 
# define MUTANTST_HPP

# include <iostream>

template <typename T>
class	MutantStack
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const & src);
		~MutantStack(void);

		void			push(T elem);
		void			pop(void);
		T				top(void) const;
		size_t			size(void) const;

		class			iterator
		{
			public:
				iterator(void);
				~iterator(void);
				iterator(iterator const & right); 
				iterator	& operator=(iterator const & right);

			private:
		};

		MutantStack		& operator=(MutantStack const & right);

	private:
		std::list<T>		_cont;

};

#endif

