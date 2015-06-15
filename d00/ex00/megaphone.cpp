#include <iostream>

using namespace	std;

static char	*ft_strtoupper(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	if (ac >= 2)
	{
		while (i < ac)
		{
			cout << ft_strtoupper(av[i]);
			i++;
		}
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << endl;
	return (0);
}
