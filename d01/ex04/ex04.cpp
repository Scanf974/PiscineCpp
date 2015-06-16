/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:05:14 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 16:10:16 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr_str = &str;
	std::string		&ref_str = str;

	std::cout << *ptr_str << std::endl;
	std::cout << ref_str << std::endl;
	return (0);
}
