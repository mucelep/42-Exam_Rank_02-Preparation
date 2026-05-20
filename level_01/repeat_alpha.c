#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c, int i)
{
	while (i > 0)
	{
		write(1, &c, 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar(argv[1][i], argv[1][i] + 1 - 'a');
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar(argv[1][i], argv[1][i] + 1 - 'A');
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
