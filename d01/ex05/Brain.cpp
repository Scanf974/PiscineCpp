/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:14:58 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/16 20:09:24 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void)
{
	return ;
}

Brain::~Brain(void) {
	return ;
}

std::string		Brain::identify(void) const {
	std::stringstream ss;
	ss << this;  
	return (ss.str());
}
