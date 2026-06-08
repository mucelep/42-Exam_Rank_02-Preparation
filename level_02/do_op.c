#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return(sign * nbr);
}

int	main(int argc, char **argv)
{
	int	nb0;
	int	nb1;

	if (argc == 4)
	{
		nb0 = ft_atoi(argv[1]);
		nb1 = ft_atoi(argv[3]);
		if(argv[2][0] == '+')
			printf("%i", nb0 + nb1);
		else if(argv[2][0] == '-')
			printf("%i", nb0 - nb1);
		else if(argv[2][0] == '*')
			printf("%i", nb0 * nb1);
		else if(argv[2][0] == '/')
			printf("%i", nb0 / nb1);
		else if(argv[2][0] == '%')
			printf("%i", nb0 % nb1);
	}
	write(1, "\n", 1);
	return (0);
}
