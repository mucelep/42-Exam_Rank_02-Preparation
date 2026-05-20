#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *s)
{
	int	res;
	int	sign;
	int	i;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	sign = 1;
	if (s[i] == '+' || s[i] == '-')
	{
		if(s[i] == '-')
			sign = sign * -1;
		i++;
	}
	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (sign * res);
}

int	main(int argc, char **argv)
{
	int	i;
	int	rot;

	i = 0;
	rot = ft_atoi(argv[2]);
	if(argc == 3)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ft_putchar((argv[1][i] - 'a' + rot) % 26 + 'a');
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ft_putchar((argv[1][i] - 'A' + rot) % 26 + 'A');
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
