/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 00:23:10 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/20 00:54:31 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class	Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy(void);

		std::string const	& getType(void) const;
		int					getHP(void) const;

		virtual void		takeDamage(int amount);


	private:
		Enemy(void);
		Enemy(Enemy const & src);
		Enemy		& operator=(Enemy const & right);

	protected:
		int					_hp;
		std::string const	& _type;

};

#endif

