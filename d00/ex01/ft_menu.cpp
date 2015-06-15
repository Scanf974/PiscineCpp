#include <phonebook.hpp>

static int	ft_choisecmd(void)
{
	string		c;

	cout << "\t" << ADD << ": to ADD a contact" << endl;
	cout << "\t" << SEARCH << ": to SEARCH a contact" << endl;
	cout << "\t" << EXIT << ": to EXIT you're phohe" << endl;
	cout << ": ";
	getline(cin, c);
	return (0);
}

int		main(void)
{
	Contact	profil[8];
	int		nb = 0;
	string	str;
	int		choise;
	int		i;

	while (1)
	{
		cout << "ContactPhone" << endl;
		while ((choise = ft_choisecmd()) > EXIT && choise >= 0)
			cout << "Make a good choice: 0 - " << EXIT << endl;
		if (choise == EXIT)
			return (0);
		if (choise == ADD && nb < 8)
		{
			cout << "First Name: ";
			getline(cin, str);
			profil[nb].setFname(str);
			cout << endl << "Last Name: ";
			getline(cin, str);
			profil[nb].setLname(str);
			cout << endl << "Nick Name: ";
			getline(cin, str);
			profil[nb].setNname(str);
			nb++;
		}

		cout << "---ii---" << endl;
		i = 0;
		while (i < nb)
		{
			cout << i << ": " <<  profil[i].getFname() << profil[i].getLname() << endl;
			i++;
		}
		cout << "---ii---" << endl;
		//std::getline (std::cin, md);

		//	std::string		cmd;

		//	std::cout << "awef " << std::endl;

	}
	return (0);
}
