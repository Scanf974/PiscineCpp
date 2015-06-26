/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/26 15:48:44 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/26 16:57:06 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>

int		main(void)
{
	std::stack<int>		st(2);

	try
	{
	st.push(23);
	st.push(2);
	}
	catch (std::exception & e)
	{
		std::cout <<  "sfsdfsdf" << std::endl;
	}
	
	return (0);
}
