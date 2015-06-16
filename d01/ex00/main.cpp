/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:15:53 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 11:43:00 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	ponyOnTheHeap(void)
{
	std::cout << "I will shit a Pony on the heap" << std::endl;
	Pony	p("Barbarra", 100 ,3);
	std::cout << "After 150 years" << std::endl;
}

static void	ponyOnTheStack(void)
{
	std::cout << "I will shit a (new) Pony on the stack" << std::endl;
	Pony	*p = new Pony("Juliette", 89, 1);
	std::cout << "Burn dat stack!" << std::endl;
	delete p;
}

int		main(void)
{
	ponyOnTheHeap();
	std::cout << "------" << std::endl;
	ponyOnTheStack();
	return (0);
}
