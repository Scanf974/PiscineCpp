/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/18 16:23:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/18 20:02:46 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include <time.h>

int		main(void)
{
	srand(time(0));
	FragTrap	b("Bruno");
	FragTrap	j("Jean");

	b.vaulthunter_dot_exe(j.getName());
	return (0);
}
