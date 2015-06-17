/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 17:49:15 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 18:38:07 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{
	std::ifstream	ifs(av[1]);
	std::string		str;
	std::string		final_str = "";
	std::string		s1, s2;
	int				i = 0;
	int				pos;

	if (ac == 4)
	{
		s1 = av[2];
		s2 = av[3];
		if (ifs) {
			while ( getline(ifs, str) > 0) {
				if (i != 0)
					final_str += "\n";
				final_str +=  str;
				i++;
			}
			while ((pos = final_str.find(s1)) != -1)
				final_str.replace(pos, s1.length(), s2);
			ifs.close();
			std::ofstream	ofs(av[1]);
			ofs << final_str << std::endl;
			ofs.close();
		}
		else
			std::cout << "error file doesn't exist" << std::endl;
	}
	else
		std::cout << "error number argv" << std::endl;
	return (0);
}
