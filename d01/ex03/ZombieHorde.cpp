/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:46:05 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 15:51:22 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _nbZombie(N){
	this->_zeub = new Zombie[N];
	int			i = 0;
	int         pos = 0;
	std::string name[5];

	name[0] = "Yolo";
	name[1] = "Boloss";
	name[2] = "Couillon";
	name[3] = "Jean Michel de la Marcel-Farcie";
	name[4] = "Tata yoyo";

	while (i < this->_nbZombie)
	{
		pos = rand() % 5;
		_zeub[i] = *(new Zombie(name[pos], "None"));
		i++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void) {

	delete [] this->_zeub;
	return ;
}

void	ZombieHorde::announce(void) {
	int		i = 0;

	while (i < ZombieHorde::_nbZombie)
	{
		this->_zeub[i].announce();
		i++;
	}
}
