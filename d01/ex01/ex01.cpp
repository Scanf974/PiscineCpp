/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:46:36 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 11:55:58 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
	std::string		*panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
