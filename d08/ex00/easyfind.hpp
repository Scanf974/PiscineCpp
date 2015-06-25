/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:48:27 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/25 21:31:04 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
int		easyfind(T tab, int i)
{
	int		pos = 0;
	typename T::const_iterator iBegin = tab.begin();
	typename T::const_iterator iEnd = tab.end();

	for (; iBegin != iEnd; iBegin++)
	{
		if (*iBegin == i)
			return (pos);
		pos++;
	}
	throw (std::exception());
}
