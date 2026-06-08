#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >=10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	tab(int n)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc == 2)
	{
		i = 0;
		n = 0;
		while (argv[1][i])// mini atoi
		{
			n = n * 10 + (argv[1][i] - '0');
			i++;
		}
		tab(n);
	}
	write(1, "\n", 1);
	return (0);
}