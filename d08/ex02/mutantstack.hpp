/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 15:53:30 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 23:38:29 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTST_HPP 
# define MUTANTST_HPP

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		MutantStack(MutantStack const & src) { *this = src; }
		virtual ~MutantStack(void) {}

		MutantStack		& operator=(MutantStack const & right) {
			std::stack<T>::operator=(right);
			return *this;
		}

		class			iterator : public std::iterator<std::input_iterator_tag, T>
	{
		public:
			iterator(void) {}
			iterator(iterator const & src) { (void)src; }
			~iterator(void) {}


			iterator&	operator++(void) {
				this->ptr++;
				return *this;
			}
			iterator	operator++(int) {
				MutantStack<T>::iterator tmp(*this);
				++(*this);
				return tmp;
			}
			iterator&	operator--(void) {
				this->ptr--;
				return *this;
			}
			iterator	operator--(int) {
				MutantStack<T>::iterator tmp(*this);
				--(*this);
				return tmp;
			}
			bool		operator==(const iterator& right) {
				return this->ptr == right.ptr;
			}
			bool		operator!=(const iterator& right) {
				return this->ptr != right.ptr;
			}
			T&		operator*(void) {
				return *(this->ptr);
			}
			iterator	& operator=(iterator const & right) {
				this->ptr = right.getPtr();
				return (*this);
			}

			T			*getPtr(void) const {
				return (this->ptr);
			}
			T			*ptr;

		private:
	};

		iterator		begin(void) {
			T       *start = &(this->top());

			start -= (this->size() - 1);
			iterator    it;
			it.ptr = start;
			return it;
		}
		iterator		end(void) {
			T           *end = &(this->top()) + 1;
			iterator    it;

			it.ptr = end;
			return it;
		}


	private:

};

#endif
