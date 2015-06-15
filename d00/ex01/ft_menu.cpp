#include <phonebook.hpp>

static int	ft_choisecmd(void)
{
	int		c;

	cout << "\t" << ADD << ": to ADD a contact" << endl;
	cout << "\t" << SEARCH << ": to SEARCH a contact" << endl;
	cout << "\t" << EXIT << ": to EXIT you're phohe" << endl;
	cout << ": ";
	cin >> c;
	return (c);
}

int		ft_menu(void)
{
	string	cmd;
	int		choise;

	cout << "ContactPhone" << endl;
	while ((choise = ft_choisecmd()) > EXIT && choise >= 0)
		cout << "Make a good choice: 0 - " << EXIT << endl;
	if (choise == EXIT)
		return (0);
	std::getline (std::cin, cmd);

	//	std::string		cmd;

	//	std::cout << "awef " << std::endl;
	return (1);
}
