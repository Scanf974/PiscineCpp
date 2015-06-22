/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:35:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/22 23:20:51 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat		b("Bruno", 7);
	Form			f("GAYTIUDE", 5, 3);

	std::cout << b << std::endl;
	b.signForm(f);
	b.incrementGrade();

	std::cout << b << std::endl;
	b.signForm(f);
	b.incrementGrade();

	std::cout << b << std::endl;
	b.signForm(f);
	b.incrementGrade();
	return (0);
}
