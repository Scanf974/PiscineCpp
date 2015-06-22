/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 18:35:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/22 19:56:09 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat		b("sdf", 2);

	b.incrementGrade();
	b.incrementGrade();
	b.incrementGrade();
	return (0);
}
