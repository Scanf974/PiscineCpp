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

Contact		add(void)
{
	Contact		profil;
	string		str;

	cout << "First Name: ";
	getline(cin, str);
	profil.setFname(str);
	cout <<  "Last Name: ";
	getline(cin, str);
	profil.setLname(str);
	cout << "Nick Name: ";
	getline(cin, str);
	profil.setNname(str);
	cout << "Login: ";
	getline(cin, str);
	profil.setLogin(str);
	cout << "Email: ";
	getline(cin, str);
	profil.setEmail(str);
	cout << "Favorite meal: ";
	getline(cin, str);
	profil.setFmeal(str);
	cout << "Underwear color: ";
	getline(cin, str);
	profil.setUnderWearColor(str);
	cout << "Darkest secret: ";
	getline(cin, str);
	profil.setDarkestSecret(str);
	return (profil);
}

int		main(void)
{
	Contact	profil[8];
	int		nb = 0;
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
			profil[nb] = add();
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
