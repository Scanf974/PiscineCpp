/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 17:25:13 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/19 17:29:17 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int	main(void)
{
	AWeapon		*a = new PlasmaRifle(23, 32);

	return (0);
}
