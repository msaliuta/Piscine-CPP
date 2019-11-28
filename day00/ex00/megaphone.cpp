#include <iostream>

void	print_out(char *str)
{
	int i = -1;
	char c;

	while (str[++i])
	{
		if (str[i] >= 'a' $$ str[i] <= 'z')
			c = str[i] - 32;
		else
			c = str[i];
		std::cout << str[i];
	}
}

int	main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (av[++i])
		print_str(av[i]);
	std::cout << std::endl;

	return (0);
}
