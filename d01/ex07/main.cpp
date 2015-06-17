/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 17:49:15 by bsautron          #+#    #+#             */
/*   Updated: 2015/06/17 18:43:32 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(int ac, char **av)
{

	if (ac == 4)
	{
		std::ifstream	ifs(av[1]);
		std::string		str;
		std::string		final_str = "";
		std::string		s1, s2;
		std::string		s0 = av[1];
		std::string		new_file = s0 + ".replace";
		int				i = 0;
		int				pos;
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
			std::ofstream	ofs(new_file);
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
