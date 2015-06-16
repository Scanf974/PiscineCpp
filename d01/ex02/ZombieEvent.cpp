/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 12:21:34 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 13:50:50 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "A ZombieEvent Construted" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "A ZombieEvent Destructer" << std::endl;
	return ;
}

void	ZombieEvent::setZombieType(std::string type) {
	ZombieEvent::_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name) {

	Zombie	*zeub = new Zombie(name, ZombieEvent::_type);
	return (zeub);
}

Zombie	*ZombieEvent::randomChump(void) {
	int			pos = 0;
	std::string	name[5];

	name[0] = "Yolo";
	name[1] = "Boloss";
	name[2] = "Couillon";
	name[3] = "Jean Michel de la Marcel-Farcie";
	name[4] = "Tata yoyo";

	pos = rand() % 5;
	Zombie	*newZeub = new Zombie(name[pos], ZombieEvent::_type);
	return (newZeub);
}

std::string		ZombieEvent::_type = "none";
